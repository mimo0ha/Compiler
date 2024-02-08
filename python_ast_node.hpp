/*
* @name python_ast_node.h
* @description Hierachy of AST
* @author Ismaeel_J_K 
* @example x=y+99
*                        |---------|
*                        | AstNode |
*                        |---------|
*                             |
*                             |
*                      |--------------|
*                      |    Assign    |
*                      |--------------|
*                          |        |
*                         |           |
*                        |              |
*                    |------------|   |--------------|
*                    |     x      |   |      Plus    |
*                    |------------|   |--------------|
*                                       |          |
*                                      |            |
*                                     |              |
*                           |-------------|     |-------------|
*                           |       y     |     |       99    |
*                           |-------------|     |-------------|
*                                       
*/

#ifndef AST_NODE_H
#define AST_NODE_H

#include <iostream>
#include <vector>
// #include <stdlib.h>


// Abstract base class for AST nodes
class AstNode {
public:
    std::string name = "undefined";   // String member variable with default value
    std::string label = "undefined";
    virtual void add(AstNode* node) = 0;
    virtual void print() const = 0;
    virtual ~AstNode() {}
    
};

class Code : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    Code(const std::string& name) {
        this->name = name;
        this->label = "Start code";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~Code() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class MYCode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    MYCode(const std::string& name) {
        this->name = name;
        this->label = "MyCode";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~MYCode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};


class MYCodeClass : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    MYCodeClass(const std::string& name) {
        this->name = name;
        this->label = "ClassCode";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~MYCodeClass() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};

class InputStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    InputStatementNode(const std::string& name) {
        this->name = name;
        this->label = "InputStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

     ~InputStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }
};


// Composite node for representing function declare
class FunctionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    FunctionNode(const std::string& name) {
        this->name = name;
        this->label = "Declare Fun";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<" : "<<name<<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~FunctionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class ClassNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ClassNode(const std::string& name) {
        this->name = name;
        this->label = "Declare Class ";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<" : "<<name<<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ClassNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};


class ListNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ListNode(const std::string& name) {
        this->name = name;
        this->label = "List";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};



class ForNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ForNode(const std::string& name) {
        this->name = name;
        this->label = "For_index ";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<" : "<<name<<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ForNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class WhileNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    WhileNode(const std::string& name) {
        this->name = name;
        this->label = "While_Loop ";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~WhileNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class TryStatmentNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    TryStatmentNode(const std::string& name) {
        this->name = name;
        this->label = "Try_Statment";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~TryStatmentNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};


class TryNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    TryNode(const std::string& name) {
        this->name = name;
        this->label = "Try";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~TryNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class ExceptNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ExceptNode(const std::string& name) {
        this->name = name;
        this->label = "Except";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ExceptNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class FinallyNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    FinallyNode(const std::string& name) {
        this->name = name;
        this->label = "Finally";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~FinallyNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class ElseTryNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ElseTryNode(const std::string& name) {
        this->name = name;
        this->label = "Else_Try";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ElseTryNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};


class IfNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    IfNode(const std::string& name) {
        this->name = name;
        this->label = "IF";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~IfNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class ElIfNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ElIfNode(const std::string& name) {
        this->name = name;
        this->label = "Elif";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ElIfNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};
class ElseNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ElseNode(const std::string& name) {
        this->name = name;
        this->label = "Else";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label <<"\"]" << std::endl;
        std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     // example
        //     // Func -> args
        //     // Func -> body
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& item : next) {
            std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
            item->print();
        }
    }

    ~ElseNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

 
};

class PlusExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    PlusExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "PlusExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~PlusExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};

class MinusExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    MinusExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "MinusExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~MinusExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};

class EqualExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    EqualExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "EqualExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~EqualExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class MulExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    MulExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "MulExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~MulExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};

class DivideExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    DivideExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "DivideExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~DivideExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class LessthanAssignExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    LessthanAssignExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "LessthanAssignExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
   ~LessthanAssignExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class GreaterthanAssignExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    GreaterthanAssignExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "GreaterthanAssignExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~GreaterthanAssignExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};

class LessthanExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    LessthanExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "LessthanExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~LessthanExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};

class GreaterthanExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    GreaterthanExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "GreaterthanExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~GreaterthanExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class AndExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    AndExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "AndExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~AndExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class OrExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    OrExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "OrExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~OrExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class UminusExpressionNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    UminusExpressionNode(const std::string& name) {
        this->name = name;
        this->label = "UminusExpression";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        
   for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~UminusExpressionNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};   

class LbracketExpressionRbracketNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    LbracketExpressionRbracketNode(const std::string& name) {
        this->name = name;
        this->label = "LbracketExpressionRbracket";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~LbracketExpressionRbracketNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
class MinusExpressionUminusNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    MinusExpressionUminusNode(const std::string& name) {
        this->name = name;
        this->label = "MinusExpressionUminus";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~MinusExpressionUminusNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};
   

// base node for representing identifier ,will create object  from lexer
class IdentifierNode : public AstNode {

public:
    std::string value = "undefined";
    IdentifierNode(std::string name, std::string label, std::string value) {
        this->name = name;
        this->label = label;
        this->value = value; 
    }
    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;

    }
};


class Arg : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    Arg(const std::string& name) {
        this->name = name;
        this->label = "Argument";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto& arg : next) {
            arg->print();
        }
    }
};



class Args : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    Args(const std::string& name) {
        this->name = name;
        this->label = "Arguments";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};





class BlockNode : public AstNode {
private:
    std::vector<AstNode*> next;
public:
    BlockNode(const std::string& name) {
        this->name = name;
        this->label = "Block";
    }
    void add(AstNode* node) override {
        next.push_back(node);
    }
    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        // std::vector<AstNode*>::iterator it;
        // for (it = next.begin(); it != next.end(); ++it) {
        //     std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
        //     (*it)->print();
        // }
        for (const auto& stmt : next) {
            std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }
    ~BlockNode() {
        for (const auto& stmt : next) {
            delete stmt;
        }
    }
};




class StatementsNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    StatementsNode(const std::string& name) {
        this->name = name;
        this->label = "Block Statements";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto& stmt : next) {
            std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~StatementsNode() {
        for (const auto& stmt : next) {
            delete stmt;
        }
    }
};





class assignmentStatement : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    assignmentStatement(const std::string& name) {
        this->name = name;
        this->label = "assignment";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto& stmt : next) {
            std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
        // for (const auto& stmt : next) {
        //     stmt->print();
        // }
    }

    ~assignmentStatement() {
        for (const auto& stmt : next) {
            delete stmt;
        }
    }
};



// Leaf node for representing numeric literals
class NumberNode : public AstNode {
private:
    int value;
public:
    NumberNode(std::string name, std::string label, int value) {
        this->name = name;
        this->label = label;
        this->value = value; 
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;

    }
};

// Leaf node for representing numeric literals
class StringNode : public AstNode {
private:
    std::string value;
public:
    StringNode(std::string name, std::string label, std::string value) {
        this->name = name;
        this->label = label;
        this->value = value; 
    }

    void add(AstNode* /*node*/) override {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;

    }
};





// Composite node for representing binary expressions
class BinaryExpressionNode : public AstNode {
private:
    char operation;
    AstNode* left;
    AstNode* right;

public:
    BinaryExpressionNode(char op, AstNode* l, AstNode* r)
        : operation(op), left(l), right(r) {}

    void add(AstNode* node) override {
        if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Binary expression already has two children." << std::endl;
    }

    void print() const override {
        std::cout << "\t" << "BinaryExpressionNode" << " [label=\"" << operation << "\"]" << std::endl;
        left->print();
        std::cout << "\t" << "BinaryExpressionNode" << " [label=\"" << operation << "\"]" << std::endl;
        right->print();
    }

    ~BinaryExpressionNode() {
        delete left;
        delete right;
    }
};


class ReturnStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ReturnStatementNode(const std::string& name) {
        this->name = name;
        this->label = "ReturnStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class ImportStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    ImportStatementNode(const std::string& name) {
        this->name = name;
        this->label = "ImportStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class FromStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    FromStatementNode(const std::string& name) {
        this->name = name;
        this->label = "FromStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};


class PassStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    PassStatementNode(const std::string& name) {
        this->name = name;
        this->label = "PassStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class BreakStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    BreakStatementNode(const std::string& name) {
        this->name = name;
        this->label = "BreakStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class CONTINUEStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    CONTINUEStatementNode(const std::string& name) {
        this->name = name;
        this->label = "ContinueStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class RangetatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    RangetatementNode(const std::string& name) {
        this->name = name;
        this->label = "RangeStatement";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }
};

class PrintStatementNode : public AstNode {
private:
    std::vector<AstNode*> next;

public:
    PrintStatementNode(const std::string& name) {
        this->name = name;
        this->label = "PrintStatemen";
    }

    void add(AstNode* node) override {
        next.push_back(node);
    }

    void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

        for (const auto& arg : next) {
            std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
            arg->print();
        }
    }

     ~PrintStatementNode() {
        for (const auto& arg : next) {
            delete arg;
        }
    }

};












class AST {
private:
    AstNode* root = nullptr;
public:
    AST(AstNode* r) : root(r) {}

    ~AST() {
        if (root != nullptr) {
            delete root;
            root = nullptr;
        }
    }
    void Print() {
        std::cout << "digraph G {" << std::endl;
        root->print();
        std::cout << "}" << std::endl;
    }
};
#endif 
