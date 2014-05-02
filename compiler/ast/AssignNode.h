#pragma once
#include "Node.h"
#include "TypeChecker.h"
class AssignNode: public Node
{
public:

	Node* _rightExp;
	Node* _leftExp;

	AssignNode(ScoopNode* scoope,Node* leftExp,Node* rightexp):Node(scoope),_rightExp(rightexp),_leftExp(leftExp)
	{

	}
	 void setLeftExp(Node * leftExp){
		 this->_leftExp=leftExp;
	}
	 void generate_code(){
		 string t1="t1";
		  string t0="t0";
		 string mem_addr="sp";
		  _rightExp->generate_code();
		 
		
		 MIPS_ASM::pop(t1);
		// lw $t1, 0($sp)
	//add $sp,$sp,4
		 _leftExp->generate_code();
		 MIPS_ASM::pop(t0);
	//lw $t0, 0($sp)
	//add $sp,$sp,4
			MIPS_ASM::operation(t0,"0",t1,1);

	//add $t0,$0,$t1
			if(dynamic_cast<IdentifierNode*>(_leftExp))
			MIPS_ASM::sw_fp(t0,dynamic_cast<IdentifierNode*>(_leftExp)->getOffset());
			//else
			//	MIPS_ASM::sw_fp(t0,dynamic_cast<IdentifierNode*>(dynamic_cast<DeclerationNode*>(_leftExp)->)->getOffset());
	//sw $t0, 0($this->left->offset)
	 }
	 void toString(){
		 cout<<"AssignNode\n";
		 _rightExp->toString();
		 _leftExp->toString();
	 }
	virtual bool type_check()
	{
		
		if(TypeChecker::canCast(_rightExp->get_type(),_leftExp->get_type())==1)
			{
				return true;
			}
		else if(TypeChecker::canCast(_rightExp->get_type(),_leftExp->get_type())==2)
			{
				
				////////////////////////////////////////////////////////////
				//////TO DO THROW WARNING
				///////////////////////////////////////////////////////////
				return true;

			}else{
				////////////////////////////////////////////////////////////
				//////TO DO THROW ERROR
				///////////////////////////////////////////////////////////
			return false;
			}
	}

	virtual ~AssignNode(void)
	{
	}
};

