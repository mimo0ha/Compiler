%code requires {
      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>
}
%union{
    AstNode* astNode;
        IdentifierNode* idNode;
    int d;
}
%{
      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;
      int id=1;
%}

// tokens
%token <astNode> ID STRING ASSIGN RETURN
%token <astNode> EQ PLUS MINUS MUL DIVIDE   SEMICOLON EQUAL
%token <astNode> PRINT KEYWORD IDENTIFIER DEF
%token <astNode> INDENTAITON DENTAITON NEWLINE STRING_LITERAL
%token <astNode> DIGIT NUMBER DECIMAL LETTER ALPHANUM OPERATORS COLON ELSE IF FOR WHILE INPUT EXCEPT TRY ELIF LBRACKET RBRACKET TRUE FALSE 
%token <astNode> COMMA GREATERTHAN LESSTHAN AS FINALLY IN RANGE BREAK CONTINUE SQUAREBL SQUAREBR PASS IMPORT DOT CLASS FROM OR AND
%type  <astNode> function args args_ arg block statements stm assignment expression return_stmt inreturn output in txtn txtnt  ifstatementsforloops
%type  <astNode> ifstatements loopstatements ifstatementsforloops_def ifstatements_def loopstatements_def ifblockforloops ifblock loopblock 
%type  <astNode> ifblockforloops_def ifblock_def loopblock_def  mycode txtn1 txtnt1  code pass_simple_stmt simple_stmt_break for for_def list
%type  <astNode> range forparams listrule inlist class classblock classargs mycodeclass if whileloop import from path importarg whileloop_def 
%type  <astNode> if_def whileargs ifforloops_def ifforloops tryrule except_name tryelse finally except try elifstatementforloops elsestatementforloops
%type  <astNode> elifstatementforloops_def elsestatementforloops_def elifstatement elsestatement elifstatement_def elsestatement_def 

%nonassoc EQUAL
%left AND OR LESSTHAN GREATERTHAN ASSIGN
%left PLUS MINUS
%left MUL DIVIDE
%nonassoc '|' UMINUS


%%

/* Parser Grammar */

code : mycode { 
      std::string name = "code" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new Code("startCode");
      $$->add($1);
      root = $$;
               YYACCEPT;
}


mycode : mycode if { $1->add($2); $$ = $1;}
       | mycode import { $1->add($2); $$ = $1;}
       | mycode from { $1->add($2); $$ = $1;}
       | class { $$ = new MYCode("CodeStatements "); $$->add($1);   }
       | mycode class {$1->add($2); $$ = $1;}
       | stm {  $$ = new MYCode("CodeStatements "); $$->add($1);  }
       | mycode stm {$1->add($2); $$ = $1; }
       | mycode whileloop { $1->add($2); $$ = $1; }
       | mycode for { $1->add($2); $$ = $1; }
       | for { $$ = new MYCode("CodeStatements "); $$->add($1);  }
       | whileloop {$$ = new MYCode("CodeStatements"); $$->add($1);}
       | function {$$ = new MYCode("CodeStatements"); $$->add($1);  }
       | mycode function { $1->add($2); $$ = $1;}
       | if { $$ = new MYCode("CodeStatements"); $$->add($1);}
       | import {$$ = new MYCode("CodeStatements"); $$->add($1); }
       | from {$$ = new MYCode("CodeStatements"); $$->add($1); }
       ;

stm : output NEWLINE { $$ = $1; }
    | in NEWLINE { $$ = $1; }
    | tryrule { $$ = $1; }
    | pass_simple_stmt NEWLINE { $$ = $1;}
    | listrule NEWLINE { $$ = $1; }
    | NEWLINE { }
    | assignment NEWLINE { $$ = $1; }
    ;
 

block : NEWLINE INDENTAITON statements DENTAITON {$$ = $3;  }
      ;
ifblockforloops : NEWLINE INDENTAITON ifstatementsforloops DENTAITON  {$$ = $3;}
                ; 
ifblock : NEWLINE INDENTAITON ifstatements DENTAITON  {$$ = $3;}
        ;                         
loopblock : NEWLINE INDENTAITON loopstatements DENTAITON {$$ = $3;}
           ;

ifblockforloops_def : NEWLINE INDENTAITON ifstatementsforloops_def DENTAITON  {$$ = $3;}
                ; 
ifblock_def : NEWLINE INDENTAITON ifstatements_def DENTAITON  {$$ = $3;}
        ;                         
loopblock_def : NEWLINE INDENTAITON loopstatements_def DENTAITON {$$ = $3;}
           ;           
          

statements 
          : return_stmt NEWLINE {  
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); }
          | statements return_stmt NEWLINE { $1->add($2); $$ = $1; }
          | stm  { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); }
          | statements stm  { $1->add($2); $$ = $1; }
          | whileloop_def {
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
           }
          | statements whileloop_def {$1->add($2); $$ = $1;}
          | for_def {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
           }
          | statements for_def { $1->add($2); $$ = $1; }
          | if_def { 
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | statements if_def { $1->add($2); $$ = $1;}
          ;
ifstatementsforloops
          : ifstatementsforloops simple_stmt_break NEWLINE {$1->add($2); $$ = $1;}   
          | ifforloops  {
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | ifstatementsforloops ifforloops {$1->add($2); $$ = $1;}
          | simple_stmt_break NEWLINE {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | whileloop { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | ifstatementsforloops whileloop {$1->add($2); $$ = $1;}
          | for {
         id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
           }
          | ifstatementsforloops for { $1->add($2); $$ = $1;}
          | ifstatementsforloops stm  { $1->add($2); $$ = $1;}
          | stm  { id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  }
          ;

ifstatementsforloops_def
          : ifstatementsforloops_def simple_stmt_break NEWLINE {$1->add($2); $$ = $1;}  
          | return_stmt NEWLINE {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); }
          | ifstatementsforloops_def return_stmt NEWLINE {$1->add($2); $$ = $1;}
          | ifforloops_def  {
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  
          }
          | ifstatementsforloops_def ifforloops_def {$1->add($2); $$ = $1;}
          | simple_stmt_break NEWLINE {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | whileloop_def { 
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  

          }
          | ifstatementsforloops_def whileloop_def {$1->add($2); $$ = $1;}
          | for_def {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); 
           }
          | ifstatementsforloops_def for_def {$1->add($2); $$ = $1; }
          | ifstatementsforloops_def stm  { $1->add($2); $$ = $1; }
          | stm  { id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  }
          ;

ifstatements 
          : if  {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | ifstatements if {$1->add($2); $$ = $1;}
          | whileloop { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | ifstatements whileloop {$1->add($2); $$ = $1;}
          | for {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
           }
          | ifstatements for {$1->add($2); $$ = $1;}
          | ifstatements stm  { $1->add($2); $$ = $1;}
          | stm  {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);   }
          ;
ifstatements_def 
          : if_def  {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | ifstatements_def if_def {$1->add($2); $$ = $1;}
          | return_stmt NEWLINE {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  }
          | ifstatements_def return_stmt NEWLINE { $1->add($2); $$ = $1; }
          | whileloop_def { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
          | ifstatements_def whileloop_def {$1->add($2); $$ = $1;}
          | for_def {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); 
           }
          | ifstatements_def for_def {$1->add($2); $$ = $1;}
          | ifstatements_def stm  { $1->add($2); $$ = $1;}
          | stm  {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); }
          ;        

loopstatements : loopstatements simple_stmt_break NEWLINE {$1->add($2); $$ = $1;}
               | simple_stmt_break NEWLINE {
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);}
               | whileloop { 
                id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
               }
               | loopstatements whileloop { $1->add($2); $$ = $1; }
               | for { 
                id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
               }
               | loopstatements for { $1->add($2); $$ = $1; }
               | stm  {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  }
               | loopstatements stm  {$1->add($2); $$ = $1; }
               | loopstatements ifforloops { $1->add($2); $$ = $1;}
               | ifforloops { 
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
               ; 

loopstatements_def : loopstatements_def simple_stmt_break NEWLINE {$1->add($2); $$ = $1;}
               | simple_stmt_break NEWLINE {
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
               }
               | return_stmt NEWLINE {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  }
               | loopstatements_def return_stmt NEWLINE {$1->add($2); $$ = $1;}
               | whileloop_def {
                 id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
                }
               | loopstatements_def whileloop_def { $1->add($2); $$ = $1; }
               | for_def { 
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1); }
               | loopstatements_def for_def { $1->add($2); $$ = $1;}
               | stm  { id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);  }
               | loopstatements_def stm  { $1->add($2); $$ = $1; }
               | loopstatements_def ifforloops_def { $1->add($2); $$ = $1;}
               | ifforloops_def { 
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          $$ = new StatementsNode(text); $$->add($1);
          }
               ; 

simple_stmt_break: BREAK {
    id = id + 1 ;
       std::string text = "breakStatements";
     text += std::to_string(id);

    $$ = new BreakStatementNode(text); 
    std::string nname = "break" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
}
  | CONTINUE {
       id = id + 1 ;
       std::string text = "CONTINUEStatements";
     text += std::to_string(id);

    $$ = new CONTINUEStatementNode(text); 
    std::string nname = "CONTINUE" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);

  }
  ;

pass_simple_stmt : PASS {
    id = id + 1 ;
       std::string text = "PASSStatements";
     text += std::to_string(id);

    $$ = new PassStatementNode(text); 
    std::string nname = "PASS" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
}  

return_stmt: RETURN inreturn  { 
    id = id + 1 ;
       std::string text = "ReturnStatements";
     text += std::to_string(id);

    $$ = new ReturnStatementNode(text); 
    std::string nname = "retur" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
    $$->add($2);
 }
          ;

inreturn : inreturn COMMA arg { $1->add($3); $$ = $1;  }
         | arg { 
       id = id + 1 ;
       std::string text = "Argsreturn";
     text += std::to_string(id);
         $$ = new Args(text); $$->add($1); }
         ;     

assignment : IDENTIFIER ASSIGN expression  {
    id = id + 1 ;
     std::string text = "assign";
     text += std::to_string(id);

      std::string nname = "iden" + std::to_string(n_nodes);
      ++n_nodes;
      $1->name=nname;
      $$ = new assignmentStatement(text);
      $$->add($1);
      $$->add($3);

  }
  | IDENTIFIER ASSIGN in {
  id = id + 1 ;
     std::string text = "assign2";
     text += std::to_string(id);

     std::string nname = "iden" + std::to_string(n_nodes);
      ++n_nodes;
      $1->name=nname;
      $$ = new assignmentStatement(text);
      $$->add($1);
      $$->add($3);
   
  }
  | IDENTIFIER ASSIGN listrule {
    id = id + 1 ;
     std::string text = "assign3";
     text += std::to_string(id);

     std::string nname = "iden" + std::to_string(n_nodes);
      ++n_nodes;
      $1->name=nname;
      $$ = new assignmentStatement(text);
      $$->add($1);
      $$->add($3);

  }
  ; 


expression : expression PLUS expression     {
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new PlusExpressionNode(text);
$$->add($1);
$$->add($3);
}
    | expression MINUS expression     {
     id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new MinusExpressionNode(text);
$$->add($1);
$$->add($3);
    }
    | expression EQUAL expression     {
     id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new EqualExpressionNode(text);
$$->add($1);
$$->add($3);
     }
    | expression MUL expression     {
       id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new MulExpressionNode(text);
$$->add($1);
$$->add($3);
     }
    | expression DIVIDE expression     {
     id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new DivideExpressionNode(text);
$$->add($1);
$$->add($3); 
     }
    | expression LESSTHAN ASSIGN expression {
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new LessthanAssignExpressionNode(text);
$$->add($1);
$$->add($4); 
     }
    | expression GREATERTHAN ASSIGN expression { 
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new GreaterthanAssignExpressionNode(text);
$$->add($1);
$$->add($4); 
    }
    | expression LESSTHAN expression { 
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new LessthanExpressionNode(text);
$$->add($1);
$$->add($3); 
    }
    | expression GREATERTHAN expression { 
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new GreaterthanExpressionNode(text);
$$->add($1);
$$->add($3);
    }
    | expression AND expression {
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new AndExpressionNode(text);
$$->add($1);
$$->add($3); 
     }
    | expression OR expression { 
       id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new OrExpressionNode(text);
$$->add($1);
$$->add($3);
    }
    | '|' expression  %prec UMINUS  {
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new UminusExpressionNode(text);
$$->add($2);
    }
    | LBRACKET expression RBRACKET            { 
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new LbracketExpressionRbracketNode(text);
$$->add($2);
    }
    | MINUS expression %prec UMINUS          { 
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
$$ = new MinusExpressionUminusNode(text);
$$->add($2);
    }
    | IDENTIFIER {         
        std::string nname = "idenq" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;  }
      | NUMBER {
        std::string nname = "idenb" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
       }
      | STRING_LITERAL { 
        std::string nname = "idenc" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
      }
      | TRUE {
        std::string nname = "idend" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
       }
      | FALSE { 
        std::string nname = "idene" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
      }
    ;       

function : DEF IDENTIFIER LBRACKET args RBRACKET COLON block {

      std::string name = "func" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>($2);
      $$ = new FunctionNode(idFunc->value);
      $$->add($4);
      $$->add($7);

            };

args  : /* empty params */ { $$ = NULL;}
      | args_  { $$ = $1; }
      ;

args_ : arg { 
    id = id + 1 ;
     std::string text = "Args";
     text += std::to_string(id);
      $$ = new Args(text); $$->add($1);}
      | args_ COMMA arg { $1->add($3); $$ = $1;  }
      ;

arg   : IDENTIFIER {         
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;  }
      | NUMBER {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
       }
      | STRING_LITERAL { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
      }
      | TRUE {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
       }
      | FALSE { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
      }
      ;
  
                                
ifforloops :   IF whileargs COLON ifblockforloops elifstatementforloops {
              id = id + 1 ;
       std::string text = "if_loops";
     text += std::to_string(id);
     std::string name = "if_loops_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
   
            } 
            |  IF whileargs COLON ifblockforloops elsestatementforloops  { 
                id = id + 1 ;
       std::string text = "if_loops2";
     text += std::to_string(id);
     std::string name = "if_loops2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
            } 
            |  IF whileargs COLON ifblockforloops {
            id = id + 1 ;
       std::string text = "if_loops3";
     text += std::to_string(id);
     std::string name = "if_loops3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);

             } 
            ;


elifstatementforloops :  ELIF whileargs COLON ifblockforloops {
                   id = id + 1 ;
              std::string text = "elif_loops";
             text += std::to_string(id);
            std::string name = "elif_loops_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);

                }
              | ELIF whileargs COLON ifblockforloops elsestatementforloops {
              id = id + 1 ;
              std::string text = "elif_loops2";
             text += std::to_string(id);
            std::string name = "elif_loops2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              | ELIF whileargs COLON ifblockforloops elifstatementforloops {
              id = id + 1 ;
              std::string text = "elif_loops3";
             text += std::to_string(id);
            std::string name = "elif_loops3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              ;

elsestatementforloops : ELSE COLON ifblockforloops {
                          id = id + 1 ;
              std::string text = "else_loops";
             text += std::to_string(id);
            std::string name = "else_loops_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElseNode(text);
      $$->add($3);
                           };


ifforloops_def :   IF whileargs COLON ifblockforloops_def elifstatementforloops_def { 
              id = id + 1 ;
       std::string text = "if_loops_def";
     text += std::to_string(id);
     std::string name = "if_loops_def_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              } 
            |  IF whileargs COLON ifblockforloops_def elsestatementforloops_def  {
            id = id + 1 ;
       std::string text = "if_loops_def2";
     text += std::to_string(id);
     std::string name = "if_loops_def2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
             } 
            |  IF whileargs COLON ifblockforloops_def { 
          id = id + 1 ;
       std::string text = "if_loops_def3";
     text += std::to_string(id);
     std::string name = "if_loops_def3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
            } 
            ;


elifstatementforloops_def :  ELIF whileargs COLON ifblockforloops_def  {
                   id = id + 1 ;
       std::string text = "elif_loops_def";
     text += std::to_string(id);
     std::string name = "elif_loops_def_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
              }
              | ELIF whileargs COLON ifblockforloops_def elsestatementforloops_def {
              id = id + 1 ;
       std::string text = "elif_loops_def2";
     text += std::to_string(id);
     std::string name = "elif_loops_def2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              | ELIF whileargs COLON ifblockforloops_def elifstatementforloops_def {
              id = id + 1 ;
       std::string text = "elif_loops_def3";
     text += std::to_string(id);
     std::string name = "elif_loops_def3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              ;

elsestatementforloops_def : ELSE COLON ifblockforloops_def {
    id = id + 1 ;
       std::string text = "else_loops_def";
     text += std::to_string(id);
     std::string name = "else_loops_def_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElseNode(text);
      $$->add($3);

};
              
 


if :  IF whileargs COLON ifblock elifstatement { 
             id = id + 1 ;
       std::string text = "ifcode";
     text += std::to_string(id);
     std::string name = "ifcode_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
} 
   |  IF whileargs COLON ifblock elsestatement  {
         id = id + 1 ;
       std::string text = "ifcode2";
     text += std::to_string(id);
     std::string name = "ifcode2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
    } 
   |  IF whileargs COLON ifblock { 
       id = id + 1 ;
       std::string text = "ifcode3";
     text += std::to_string(id);
     std::string name = "ifcode3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
   } 
   ;


elifstatement :  ELIF whileargs COLON ifblock {
               id = id + 1 ;
       std::string text = "elifcode";
     text += std::to_string(id);
     std::string name = "elifcode_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
               }
              | ELIF whileargs COLON ifblock elsestatement {
              id = id + 1 ;
       std::string text = "elifcode2";
     text += std::to_string(id);
     std::string name = "elifcode2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              | ELIF whileargs COLON ifblock elifstatement {
               id = id + 1 ;
       std::string text = "elifcode3";
     text += std::to_string(id);
     std::string name = "elifcode3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              ;
              
elsestatement : ELSE COLON ifblock {
               id = id + 1 ;
       std::string text = "elsecode";
     text += std::to_string(id);
     std::string name = "elsecode_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElseNode(text);
      $$->add($3);
};

if_def :  IF whileargs COLON ifblock_def elifstatement_def {
           id = id + 1 ;
       std::string text = "ifdef";
     text += std::to_string(id);
     std::string name = "ifdef_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
  } 
   |  IF whileargs COLON ifblock_def elsestatement_def  {
          id = id + 1 ;
       std::string text = "ifdef2";
     text += std::to_string(id);
     std::string name = "ifdef2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
    } 
   |  IF whileargs COLON ifblock_def {
         id = id + 1 ;
       std::string text = "ifdef3";
     text += std::to_string(id);
     std::string name = "ifdef3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new IfNode(text);
      $$->add($2);
      $$->add($4);
    } 
   ;

elifstatement_def :  ELIF whileargs COLON ifblock_def {
               id = id + 1 ;
       std::string text = "elifdef";
     text += std::to_string(id);
     std::string name = "elifdef_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
              }
              | ELIF whileargs COLON ifblock_def elsestatement_def {
               id = id + 1 ;
       std::string text = "elifdef2";
     text += std::to_string(id);
     std::string name = "elifdef2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              | ELIF whileargs COLON ifblock_def elifstatement_def {
              id = id + 1 ;
       std::string text = "elifdef3";
     text += std::to_string(id);
     std::string name = "elifdef3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElIfNode(text);
      $$->add($2);
      $$->add($4);
      $$->add($5);
              }
              ;
              
elsestatement_def : ELSE COLON ifblock_def {
    id = id + 1 ;
       std::string text = "elsedef";
     text += std::to_string(id);
     std::string name = "elsedef_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElseNode(text);
      $$->add($3);
};

              
whileloop: WHILE whileargs COLON loopblock {
         id = id + 1 ;
     std::string text = "whileloop";
     text += std::to_string(id);

      std::string name = "while" + std::to_string(n_nodes);
      ++n_nodes;

      $$ = new WhileNode(text);

      $$->add($2);
      $$->add($4);
          }
          ;
whileloop_def: WHILE whileargs COLON loopblock_def {
        id = id + 1 ;
     std::string text = "whileloopdef";
     text += std::to_string(id);

      std::string name = "whiledef" + std::to_string(n_nodes);
      ++n_nodes;

      $$ = new WhileNode(text);
      $$->add($2);
      $$->add($4);
          }
          ;
whileargs : expression {
    id = id + 1 ;
     std::string text = "While_Args";
     text += std::to_string(id);
      $$ = new Args(text); 
      $$->add($1);
};          


for: FOR IDENTIFIER IN list COLON loopblock {
    std::string name = "for" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* forindix = dynamic_cast<IdentifierNode*>($2);
      $$ = new ForNode(forindix->value);
      $$->add($4);
      $$->add($6);
}
   ;
for_def: FOR IDENTIFIER IN list COLON loopblock_def {

     std::string name = "for_def" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* for_defindix = dynamic_cast<IdentifierNode*>($2);
      $$ = new ForNode(for_defindix->value);
      $$->add($4);
      $$->add($6);
    
     }
   ;   


list: IDENTIFIER  {
     id = id + 1 ;
     std::string text = "list_Args";
     text += std::to_string(id);
      $$ = new Args(text); 

      std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    
    }
    | STRING_LITERAL      {
    id = id + 1 ;
     std::string text = "list_Args";
     text += std::to_string(id);
      $$ = new Args(text); 
      
      std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    }
    | range  { $$ = $1; }
    | listrule            {}
    ;

range: RANGE LBRACKET forparams RBRACKET {
        id = id + 1 ;
       std::string text = "RangeStatements";
     text += std::to_string(id);

    $$ = new RangetatementNode(text); 
    std::string nname = "range" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
    $$->add($3);
} ;

forparams: forparams COMMA expression {$1->add($3); $$ = $1;  }
         | expression      {
         id = id + 1 ;
       std::string text = "ArgsRange";
     text += std::to_string(id);
         $$ = new Args(text); $$->add($1);
         }
         ;
 
              
try : TRY COLON NEWLINE INDENTAITON statements DENTAITON{
      id = id + 1 ;
       std::string text = "tryEx";
     text += std::to_string(id);
     std::string name = "try_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new TryNode(text);
      $$->add($5);
    }
    ;

except : EXCEPT COLON NEWLINE INDENTAITON statements DENTAITON{
          id = id + 1 ;
       std::string text = "except";
     text += std::to_string(id);
     std::string name = "except_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ExceptNode(text);
      $$->add($5);
};
              

finally : FINALLY COLON NEWLINE INDENTAITON statements DENTAITON {
         id = id + 1 ;
       std::string text = "finallytry";
     text += std::to_string(id);
     std::string name = "finally_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new FinallyNode(text);
      $$->add($5);
};

tryelse : ELSE COLON NEWLINE INDENTAITON statements DENTAITON {
          id = id + 1 ;
       std::string text = "elsetry";
     text += std::to_string(id);
     std::string name = "elsetry_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ElseTryNode(text);
      $$->add($5);
};
              
except_name : EXCEPT importarg COLON NEWLINE INDENTAITON statements DENTAITON {
              id = id + 1 ;
       std::string text = "except_name1";
     text += std::to_string(id);
     std::string name = "except_name1_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ExceptNode(text);
      $$->add($2);
      $$->add($5);
            }
            | EXCEPT importarg AS importarg COLON NEWLINE INDENTAITON statements DENTAITON {
            id = id + 1 ;
       std::string text = "except_name2";
     text += std::to_string(id);
     std::string name = "except_name2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new ExceptNode(text);
      $$->add($2);
      std::string asexceptname = "asinexcept" + std::to_string(n_nodes);
    ++n_nodes;
    $3->name=asexceptname;
    $$->add($3);
    $$->add($4);

      $$->add($8);

            };

tryrule  :   try except {
             id = id + 1 ;
           std::string text = "TryStatment";
          text += std::to_string(id);
          std::string name = "TryStatment_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
              }
              | try except tryelse {
             id = id + 1 ;
           std::string text = "TryStatment1";
          text += std::to_string(id);
          std::string name = "TryStatment1_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
              }
              | try except_name {
              id = id + 1 ;
           std::string text = "TryStatment2";
          text += std::to_string(id);
          std::string name = "TryStatment2_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
              }
              | try except_name except {
              id = id + 1 ;
           std::string text = "TryStatment3";
          text += std::to_string(id);
          std::string name = "TryStatment3_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
              }
              | try except_name tryelse {
              id = id + 1 ;
           std::string text = "TryStatment4";
          text += std::to_string(id);
          std::string name = "TryStatment4_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
              }
              | try except finally {
              id = id + 1 ;
           std::string text = "TryStatment5";
          text += std::to_string(id);
          std::string name = "TryStatment5_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
              }
              | try except tryelse finally {
              id = id + 1 ;
           std::string text = "TryStatment6";
          text += std::to_string(id);
          std::string name = "TryStatment6_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
          $$->add($4);
              }
              | try except_name finally {
              id = id + 1 ;
           std::string text = "TryStatment7";
          text += std::to_string(id);
          std::string name = "TryStatment7_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
              }
              | try except_name except finally{
              id = id + 1 ;
           std::string text = "TryStatment8";
          text += std::to_string(id);
          std::string name = "TryStatment8_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
          $$->add($4);
              }
              | try except_name tryelse finally{
              id = id + 1 ;
           std::string text = "TryStatment9";
          text += std::to_string(id);
          std::string name = "TryStatment9_stm" + std::to_string(n_nodes);
          ++n_nodes;
          $$ = new TryStatmentNode(text);
          $$->add($1);
          $$->add($2);
          $$->add($3);
          $$->add($4);
              }
              ;


output : PRINT LBRACKET txtn RBRACKET {
id = id + 1 ;
std::string text = "PrintStatements";
text += std::to_string(id);

std::string name = "print" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new PrintStatementNode(text);
    $$->add($3);


            };

txtn : txtn PLUS txtnt  { $1->add($3); $$ = $1;  }
     | txtn  txtnt  { $1->add($2); $$ = $1;  }
     | txtnt { 
     id = id + 1 ;
     std::string text = "print_args";
     text += std::to_string(id);
     $$ = new Args(text); $$->add($1); }
     ;

txtnt : IDENTIFIER {         
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;  }
      | NUMBER {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
       }
      | STRING_LITERAL {
    std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    }
      ;   


in : INPUT LBRACKET txtn1 RBRACKET{
     id = id + 1 ;
     std::string text = "InputStatements";
     text += std::to_string(id);

      std::string name = "Input" + std::to_string(n_nodes);
      ++n_nodes;
      $$ = new InputStatementNode(text);
    $$->add($3);
            };

txtn1 : txtn1 PLUS txtnt1  { $1->add($3); $$ = $1;  }
     | txtn1  txtnt1  { $1->add($2); $$ = $1;  }
     | txtnt1 { id = id + 1 ;
     std::string text = "input_args";
     text += std::to_string(id);
     $$ = new Args(text); $$->add($1); }
     ;

txtnt1 : IDENTIFIER {         
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;  }
      | NUMBER {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
       }
      | STRING_LITERAL {
    std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
    }
      ;      


         

listrule : SQUAREBL inlist SQUAREBR {

    id = id + 1 ;
    std::string text = "listnode";
    text += std::to_string(id);

    $$ = new ListNode(text); 
    
    $$->add($2);
         }
         ;
inlist: inlist COMMA expression  { $1->add($3); $$ = $1; }
      | inlist COMMA expression NEWLINE { $1->add($3); $$ = $1;}
      | inlist COMMA NEWLINE expression { $1->add($4); $$ = $1; }
      | expression {
      id = id + 1 ;
     std::string text = "Argsforlist";
     text += std::to_string(id);
      $$ = new Args(text); $$->add($1);

      }
      | NEWLINE {}
      ;       

class : CLASS IDENTIFIER COLON classblock {

     std::string name = "class1" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* class_indix = dynamic_cast<IdentifierNode*>($2);
      $$ = new ClassNode(class_indix->value);
      $$->add($4);
       }
      | CLASS IDENTIFIER LBRACKET classargs RBRACKET COLON classblock {

     std::string name = "class2" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* class_indix2 = dynamic_cast<IdentifierNode*>($2);
      $$ = new ClassNode(class_indix2->value);
      $$->add($4);
      $$->add($7);
       }
      ;
classargs :classargs COMMA arg { $1->add($3); $$ = $1; }
          | arg {
           id = id + 1 ;
     std::string text = "Argsforclass";
     text += std::to_string(id);
      $$ = new Args(text); $$->add($1);
          }
          ;

classblock : NEWLINE INDENTAITON mycodeclass DENTAITON {
      id = id + 1 ;
     std::string text = "classcodehere";
     text += std::to_string(id);

     std::string name = "code" + std::to_string(n_nodes);
     ++n_nodes;
      $$ = new Code(text);
      $$->add($3);
       }

mycodeclass : mycodeclass if {  $1->add($2); $$ = $1; }
       | mycodeclass import {  $1->add($2); $$ = $1; }
       | mycodeclass from {  $1->add($2); $$ = $1; }
       | stm { 
       id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);  }
       | mycodeclass stm {$1->add($2); $$ = $1; }
       | mycodeclass whileloop {  $1->add($2); $$ = $1; }
       | mycodeclass for { $1->add($2); $$ = $1; }
       | for { 
       id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);
         }
       | whileloop {
    id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);

       }
       | function {
        id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);
        }
       | mycodeclass function { $1->add($2); $$ = $1;}
       | if {
        id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);

        }
       | import {
      id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);
        }
       | from { 
       id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        $$ = new MYCodeClass(text); $$->add($1);
       }
       ;


import : IMPORT path NEWLINE { 
       id = id + 1 ;
       std::string text = "ImportStatements";
     text += std::to_string(id);

    $$ = new ImportStatementNode(text); 
    std::string nname = "import2" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
    $$->add($2);
       }
       |   IMPORT path AS importarg NEWLINE {
      id = id + 1 ;
    std::string text = "ImportStatements";
     text += std::to_string(id);

    $$ = new ImportStatementNode(text); 
    std::string nname = "import3" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
    $$->add($2);
    std::string asname = "as" + std::to_string(n_nodes);
    ++n_nodes;
    $3->name=asname;
    $$->add($3);
    $$->add($4);
        }
       ;

from : FROM  path IMPORT importarg NEWLINE {
    id = id + 1 ;
    std::string text = "FromStatements";
     text += std::to_string(id);

    $$ = new FromStatementNode(text); 
    std::string nname = "from" + std::to_string(n_nodes);
    ++n_nodes;
    $1->name=nname;
    $$->add($1);
    $$->add($2);
    std::string importname = "importname" + std::to_string(n_nodes);
    ++n_nodes;
    $3->name=importname;
    $$->add($3);
    $$->add($4);
} ;

path : importarg {
       id = id + 1 ;
       std::string text = "Argsimport";
     text += std::to_string(id);
         $$ = new Args(text); $$->add($1);
    
} 
     | path DOT importarg {$1->add($3); $$ = $1;} 
     ;

importarg : IDENTIFIER {
    id = id + 1 ;
     std::string text = "import_Args";
     text += std::to_string(id);
      $$ = new Args(text); 

      std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        $1->name=nname;
        $$ = $1;
}  ;   

%%



int main(int argc, char **argv)
{
 /*success("This is a valid python expression");
 expression : NUMBER  { }
            ;
                : expression '+' expression     { }
    | expression '-' expression     { }
    | expression '*' expression     { }
    | expression '/' expression     { }*/
     if (argc > 1){
        for(int i=0;i<argc;i++)
            // printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
      }
      else
        yyin=stdin;
      
      yyparse();

      // AST is constructed, you can print it now
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}


void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
}