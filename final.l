%{
#pragma warning (disable: 4005)
#include "grammar.hpp"
#include "python_ast_node.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <cmath>
#define N 1000
using namespace std;
extern int yylex();
int lno=1;
int top = -1;
int flag2=0;
int flag=0;
int stack[N];
void push(int elem);     
int pop(); 
bool isEmpty();
int peek();
int numberOfspaceinline=0;
%}

%option noyywrap
%x STRING1
%x STRING2
%x INDENTAITONN
%x ANOTHER_STRING_WITH_SINGLE
%x ANOTHER_STRING_WITH_SINGLE2
%x MULTILINE_COMMENT
%x MULTILINE_COMMENT2
%x LIST
%x STIND
%x STINDD
%x DENT
%x DENTT
%x ENDSTATE
%{
char* string_literal_value = NULL;

%}

/* Regular expressions to match tokens */

DIGIT [0-9]
NUMBER [0-9]+
DECIMAL [0-9]+\.[0-9]+
LETTER [_a-zA-Z]
ALPHANUM {LETTER}|{DIGIT}
IDENTIFIER  ([_a-zA-Z][_a-zA-Z0-9]*)
OPERATORS "//"|[{}\[\]<>!]=?
COLON  :
KEYWORD assert|del|lambda|global|not|with|yield|None|and|is|nonlocal|or|raise
RETURN return
ELSE else
IF if
DEF def
FOR for
PRINT print
WHILE while
BREAK break
INPUT input
EXCEPT except
TRY try
AS as
FINALLY finally
IN in
RANGE range
ELIF elif
ASSIGN "="
PLUS "+"
MINUS "-"
MUL "*"
DIVIDE "/"
LBRACKET "("
RBRACKET ")"
SEMICOLON ";"
EQUAL "=="
TRUE True
FALSE False
COMMA ","
GREATERTHAN ">"
LESSTHAN "<"
CONTINUE continue
SQUAREBL "["
SQUAREBR "]"
PASS pass
DOT "." 
IMPORT import
CLASS class
FROM from
OR or
AND and
%%



\#.* 					            {}



{COLON}     {

				BEGIN(INDENTAITONN);
				return COLON;
				 
				
              } 

{ELIF}              		{       
                                 
															
															flag2 = true;
															return ELIF;
															
															
														}
{OR}              		{       
                                 
															

															return OR;
															
															
														}
{AND}              		{       
                                 
															
															
															return AND;
															
															
														}
{CLASS}              		{       
                                 
															
															
															return CLASS;
															
															
														}

{TRUE}              				{       
                                   
															
															flag2 = true;
															yylval.astNode = new IdentifierNode("BOOLIAN", "boolian", yytext);
															return TRUE;
															
															
														
														}
{FALSE}              		{       


                                 
														
															flag2 = true; 
															yylval.astNode = new IdentifierNode("BOOLIAN", "boolian", yytext);
															return FALSE;
														
															
														}

{EXCEPT}              		{       


                                 
															
															flag2 = true;
															return EXCEPT;
														
															
														}

{TRY}              		{       


																
															flag2 = true;
															return TRY;
														
														
														}

{AS}              		{       


																
															flag2 = true;
															yylval.astNode = new IdentifierNode("AS", "as", yytext);
															return AS;
														
														
														}
{FINALLY}              		{       


																
															flag2 = true;
															return FINALLY;
														
														
														}																												
{RANGE}              		{       


																
															flag2 = true;
															yylval.astNode = new IdentifierNode("RANGE", "RANGE_Stmt", yytext);
															return RANGE;
														
														
														}

{IN}              		{       


																
															flag2 = true;
															return IN;
														
														
														}
{RETURN}              		{       


                                   
	
															flag2 = true;
															yylval.astNode = new IdentifierNode("RETURN", "return", yytext);
															return RETURN;
															
															
														}
{INPUT}              		{       


                                  
															
															flag2 = true;
															return INPUT;
															
														}
{ELSE}              		{       


                                
															
															flag2 = true;
															return ELSE;
														
															
														}
{IF}              		{       


                                  
														
															flag2 = true;
															return IF;
													
															
														}
{DEF}              		{       


                                  
															
															flag2 = true;
															return DEF;
											
															
														}
{FOR}              		{       


                                  
															
															flag2 = true;
															return FOR;
															
															
														}
{PRINT}              		{       


                                   
															
															flag2 = true;
															return PRINT;
														
															
														}
{WHILE}              		{       


                                  
														
															flag2 = true;
															return WHILE;
													
															
														}
{IMPORT}				{		
							               yylval.astNode = new IdentifierNode("IMPORT", "import", yytext);
											return IMPORT;
									}	
{FROM}				{		
							              yylval.astNode = new IdentifierNode("FROM", "from", yytext);
											return FROM;
									}										

{BREAK}              		{       


                                  
														
															flag2 = true;
															yylval.astNode = new IdentifierNode("BREAK", "BREAK_Stmt", yytext);
															return BREAK;
													
															
														}
{PASS}              		{       


                                  
														
															flag2 = true;
															yylval.astNode = new IdentifierNode("PASS", "PASS_Stmt", yytext);
															return PASS;
													
															
														}														
{CONTINUE}              		{       


                                  
														
															flag2 = true;
															yylval.astNode = new IdentifierNode("CONTINUE", "CONTINUE_Stmt", yytext);
															return CONTINUE;
													
															
														}																												
{NUMBER}								{	
													yylval.astNode = new NumberNode("NUMBER", "Integer", atoi(yytext));
													return NUMBER;
													}

{IDENTIFIER}           		{ 
								 
												
												yylval.astNode = new IdentifierNode("IDENTIFIER", "Identifier", yytext);
												return IDENTIFIER;
												
													
											}	
[\n] {
	lno++;
	flag2 =false;
	numberOfspaceinline=0;		
	
	BEGIN(STINDD);
	
	return NEWLINE;
										
	
}              


<INDENTAITONN>[\n]    {
				numberOfspaceinline=0;
				flag2=false;
				
				BEGIN(STIND);
				return NEWLINE;
				
			
						}

<STIND>[ ]+ {
		int rr = 1 ;
		int i=0;
  					  do{
							 if(yytext[i]==' '){
    			  		  numberOfspaceinline++;
   							 }
   							 i++;
						}while(i<=yytext[i]);

							if (flag)
							numberOfspaceinline--;
								flag=0 ;
							 	if (peek()>numberOfspaceinline){
							 		
										BEGIN(DENT) ;
										rr=0 ;
    									
											}else if (peek()<numberOfspaceinline && numberOfspaceinline!=0){
												push(numberOfspaceinline);

												return INDENTAITON;
												
										
    								
	}
	if (rr==1)
	BEGIN(INITIAL);
}
<STIND>. {
	flag=1;
	unput(*yytext);
	unput(' ');
}


<DENT>[ ]  {
		int pp=1 ;
							if(peek()>numberOfspaceinline){
    										pop();
    										
    										pp=0;
    										return DENTAITON;
    										
    									
    										
    											}else 
    											if (peek()!=numberOfspaceinline){
    												
    												return 0;
    											}
    							if(pp==1)
    							BEGIN(INITIAL);
}
<DENT>. {

	unput(*yytext);
	unput(' ');
}

<STINDD>[ ]+ {
		int rr = 1 ;
		int i=0;
  					  do{
							 if(yytext[i]==' '){
    			  		  numberOfspaceinline++;
   							 }
   							 i++;
						}while(i<=yytext[i]);

							if (flag)
							numberOfspaceinline--;
								flag=0 ;

							 	if (peek()>numberOfspaceinline){
							 		
										BEGIN(DENTT) ;
										rr=0 ;
    									
											}else if (peek()<numberOfspaceinline && numberOfspaceinline!=0){
												push(numberOfspaceinline);

												return INDENTAITON;
											
    								
	}
	if (rr==1)
	BEGIN(INITIAL);
}
<STINDD>. {
	flag=1;
	unput(*yytext);
	unput(' ');
}

<DENTT>[ ]  {
		int pp=1 ;
							if(peek()>numberOfspaceinline){
    										pop();
    										
    										pp=0;
    										return DENTAITON;
    									
    									
    										
    											}else
    											
    											if (peek()!=numberOfspaceinline){
    												
    												return 0;
    											}
    							if(pp==1)
    							BEGIN(INITIAL);
}

<DENTT>. {
	unput(*yytext);
	unput(' ');
}
<INDENTAITONN>[( )|(	)]+    {
						
						

						}

<INDENTAITONN>\#.*    {
						
						
						
						}

<INDENTAITONN>{NUMBER}    {
	                    yylval.astNode = new NumberNode("NUMBER", "Integer", atoi(yytext));
						return NUMBER;
						
						}







													
{DECIMAL}					{
	                             yylval.astNode = new NumberNode("NUMBER", "Float", atoi(yytext));
                                 return DECIMAL;	
							 
										 }
											
{EQUAL}				{		
							 
											flag2=true;
											return EQUAL;
									}



{DOT}				{		
							 
			
											return DOT;
									}


{LESSTHAN}				{		
							 
											flag2=true;
											return LESSTHAN;
								}
{GREATERTHAN}				{			
							 
											flag2=true;
											return GREATERTHAN;
									}											

{COMMA}				{			
							 
											flag2=true;
											return COMMA;
									}


{SEMICOLON}				{			
							 
											flag2=true;
											return SEMICOLON;
									}

{ASSIGN}				{			
							 
											flag2=true;
											return ASSIGN;
										}
{RBRACKET}				{	
							 
											flag2=true;
											return RBRACKET;
											}
{LBRACKET}				{	
 
											flag2=true;
											return LBRACKET;
											}
{SQUAREBL}				{	
 
											flag2=true;
											return SQUAREBL;
											}
{SQUAREBR}				{	
 
											flag2=true;
											return SQUAREBR;
											}																						

{MUL}				{			
							 
											flag2=true;
											return MUL;
											}
{DIVIDE}				{			
							 
											flag2=true;
											return DIVIDE;
											}

{PLUS}				{		
							 
											flag2=true;
											return PLUS;
											}
{MINUS}				{			
							 
											flag2=true;
											return MINUS;
											}

{COMMA}+  {     	
							 
	                   flag2 =true;
	                   return COMMA;
	                   
	              
                       }

{EQUAL}+  {     		
							 
	                   flag2 =true;
	                   return EQUAL;
	                 
	              
                       }                    

{ASSIGN}+  {     		
							 
	                   flag2 =true;
	                   return ASSIGN;
	                   
	              
                       }


{PLUS}+ {     	
							 
	                   flag2 =true;
	                   return PLUS;
	                   	
	              
                       } 
{MINUS}+ {     	
							 
	                   flag2 =true;
	                   return MINUS;
	                  
	              
                       } 
{LBRACKET}+ {     		
							 
	                   flag2 =true;
	                   return LBRACKET;
	              
	              
                       } 
{SQUAREBL}+ {     		
							 
	                   flag2 =true;
	                   return SQUAREBL;
	              
	              
                       }                        


\"\"\"[" "]*			{
	 						if(flag2 == true){
    						BEGIN(STRING1);  // Transition to the STRING start condition when a double quote is encountered
    						string_literal_value = strdup("");  // Initialize the string literal value
			        		}else {
    				                         BEGIN(MULTILINE_COMMENT);  // Transition to the STRING start condition when a double quote is encountered
    				                         string_literal_value = strdup("");  // Initialize the string literal value
			                       }             }
<MULTILINE_COMMENT>[^\"]+ 	{
    				  string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				  strcat(string_literal_value, yytext);
			}


<MULTILINE_COMMENT>[\"\"]                     {

                                         } 


<MULTILINE_COMMENT>[{KEYWORD}]*		{string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
					     strcat(string_literal_value, yytext);  
					         }



<MULTILINE_COMMENT>\"\"\"		{
									
    				                   BEGIN(INITIAL);  // Return to the initial start condition when a closing double quote is encountered
    				                  	
    				                  
			                                 }                       

                     


[^:\n= ]\"\"\" 			{
                    if(flag2 == true){
    				BEGIN(STRING1);  // Transition to the STRING start condition when a double quote is encountered
    				string_literal_value = strdup("");  // Initialize the string literal value
			        }
			}

			
<STRING1>[^\"\\n\\]+ 	{
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				strcat(string_literal_value, yytext);
			}
			

<STRING1>\\n 		{string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
					strcat(string_literal_value, "\n");  
					}

<STRING1>\\\n 		{
					}

<STRING1>\\\\n     {
                     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\\n");  // Handle escaped double quote
                     }

<STRING1>[n]* 	    {
    				     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				      strcat(string_literal_value, yytext);
			          }                     

<STRING1>\\\"   	   {
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\"");  // Handle escaped double quote
			        }
<STRING1>\"\"\" 		{
    				BEGIN(INITIAL);  // Return to the initial start condition when a closing double quote is encountered
    				flag2 == false;

    				yylval.astNode = new StringNode("STRING_LITERAL", "STRING", string_literal_value);
    				return STRING_LITERAL;
    				
    				
			       }





[^:\n= ]\'\'\'			{
	 			if(flag2 == true){
    				BEGIN(ANOTHER_STRING_WITH_SINGLE);  // Transition to the STRING start condition when a double quote is encountered
    				string_literal_value = strdup("");  // Initialize the string literal value
			}}

			
			
<ANOTHER_STRING_WITH_SINGLE>[^\'\\n\\]+ 	{
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				strcat(string_literal_value, yytext);
			}
			

<ANOTHER_STRING_WITH_SINGLE>\\n 		{string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
					strcat(string_literal_value, "\n");  
					}
<ANOTHER_STRING_WITH_SINGLE>\\\n 		{
					}					



<ANOTHER_STRING_WITH_SINGLE>\\\\n     {
                     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\\n");  // Handle escaped double quote
                     }

<ANOTHER_STRING_WITH_SINGLE>[n]* 	    {
    				     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				      strcat(string_literal_value, yytext);
			          }                    



<ANOTHER_STRING_WITH_SINGLE>\\\'   	   {
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\"");  // Handle escaped double quote
			        }
<ANOTHER_STRING_WITH_SINGLE>\'\'\' 		{
    			                   	BEGIN(INITIAL);  // Return to the initial start condition when a closing double quote is encountered
    			                   	yylval.astNode = new StringNode("STRING_LITERAL", "STRING", string_literal_value);
    				                 return STRING_LITERAL;
    				               	
			                            }

                       



									







\'\'\'[" "]* {
												if(flag2 == true){
    												BEGIN(ANOTHER_STRING_WITH_SINGLE);  // Transition to the STRING start condition when a double quote is encountered
    												string_literal_value = strdup("");  // Initialize the string literal value
			        							}else {
    				                         BEGIN(MULTILINE_COMMENT2);  // Transition to the STRING start condition when a double quote is encountered
    				                         string_literal_value = strdup("");  // Initialize the string literal value
			                       }            

			                                    }

<MULTILINE_COMMENT2>[\'\']                     {

                                         } 
<MULTILINE_COMMENT2>[^\']+ 	{
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				strcat(string_literal_value, yytext);
			}
			

<MULTILINE_COMMENT2>[{KEYWORD}]*		{string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
					     strcat(string_literal_value, yytext);  
					         }



<MULTILINE_COMMENT2>\'\'\'	{
    				                   BEGIN(INITIAL);  // Return to the initial start condition when a closing double quote is encountered
    				                  
    				               
			                                 }
				

									

\" 			{       if(flag2 == true){
    				BEGIN(STRING2);  // Transition to the STRING start condition when a double quote is encountered
    				string_literal_value = strdup("");  // Initialize the string literal value
			        }
			}

			
<STRING2>[^\"\\n\\]+ 	{
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				strcat(string_literal_value, yytext);
			}
			

<STRING2>\\n 		{string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
					strcat(string_literal_value, "\n");  
					}

<STRING2>\\\n 		{
					}

<STRING2>\\\\n     {
                     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\\n");  // Handle escaped double quote
                     }

<STRING2>[n]* 	    {
    				     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				      strcat(string_literal_value, yytext);
			          }                     

<STRING2>\\\"   	   {
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\"");  // Handle escaped double quote
			        }
<STRING2>\" 		{
    				BEGIN(INITIAL);  // Return to the initial start condition when a closing double quote is encountered
    				flag2 == false;
    				yylval.astNode = new StringNode("STRING_LITERAL", "STRING", string_literal_value);
    				return STRING_LITERAL;
    					
			       }	


\'			{
    				BEGIN(ANOTHER_STRING_WITH_SINGLE2);  // Transition to the STRING start condition when a double quote is encountered
    				string_literal_value = strdup("");  // Initialize the string literal value
			}

			
			
<ANOTHER_STRING_WITH_SINGLE2>[^\'\\n\\]+ 	{
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				strcat(string_literal_value, yytext);
			}
			

<ANOTHER_STRING_WITH_SINGLE2>\\n 		{string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
					strcat(string_literal_value, "\n");  
					}
<ANOTHER_STRING_WITH_SINGLE2>\\\n 		{
					}					



<ANOTHER_STRING_WITH_SINGLE2>\\\\n     {
                     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\\n");  // Handle escaped double quote
                     }

<ANOTHER_STRING_WITH_SINGLE2>[n]* 	    {
    				     string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
    				      strcat(string_literal_value, yytext);
			          }                    



<ANOTHER_STRING_WITH_SINGLE2>\\\'   	   {
    				string_literal_value = (char*)realloc(string_literal_value, strlen(string_literal_value) + 1);
    				strcat(string_literal_value, "\"");  // Handle escaped double quote
			        }
<ANOTHER_STRING_WITH_SINGLE2>\' 		{
    			                   	BEGIN(INITIAL);  // Return to the initial start condition when a closing double quote is encountered
    			                   	yylval.astNode = new StringNode("STRING_LITERAL", "STRING", string_literal_value );
    				                return STRING_LITERAL;
    				                 
			                            }	


<<EOF>> {
if (!isEmpty()){
	unput(' ');
	BEGIN(ENDSTATE);

}else 
yyterminate();

}
<ENDSTATE>[ ] {
	
	
	if (!isEmpty()){
		pop();
		unput(' ');
		return DENTAITON ;
		
	}else {
		yyterminate();
	}
	
}


. 			{
    		
			}



%%

void push(int elem){
    // Checking overflow state
    if(top == N-1)
        printf("Overflow State: can't add more elements into the stack\n");
    else{
        int x;
        top+=1;
        stack[top] = elem;
    }
}

int pop(){
    // Checking underflow state
    if(top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else{
        int x = stack[top];
       
        top-=1;
        return x;
    }
    return -1;
}


bool isEmpty(){
    if(top == -1){
        
        return true;
    }
    
    return false;
}
int peek(){
    int x = stack[top];
   
    return x;
}