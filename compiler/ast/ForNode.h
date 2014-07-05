#pragma once
#include "../voidnode.h"
#include "../ST/SymbolTable.h"
using std::string;
extern SymbolTable* symbolTable;
class ForNode :
	public VoidNode
{
protected:
	Node* _initlizer;
	Node* _condition;
	Node* _increment;
	Node* _statment;


public:
	static	int 	for_label;
	ForNode(Node* initlizer,Node* condition,Node* increment,Node* statment,ScoopNode* scoop):
		VoidNode(scoop), _initlizer(initlizer), _condition(condition), _increment(increment), _statment(statment)
	{

	}
	

	virtual bool typeCheck()
	{
		if (_condition->getType()==NULL)
		{
			return false;
		}
		else{
			Type* boolType = symbolTable->getType("bool");
			if (_increment->typeCheck() == true)
			{
				if (_condition->getType() == boolType)
				{
					return true;
				}
				else
				{
					/////////// error 
					string error = "ERROR Cannot implicitly convert type " + _condition->getType()->get_name() + " to 'bool' ";
					addError(error);
				}
			}
			else
			{
				return false;
			}
			/////////// error 	
				//string error = "ERROR Cannot implicitly convert type " + _condition->getType()->get_name() + " to 'bool'  AT Line Number :" + std::to_string(_line) + " Column Number :" + std::to_string(_col);
				//Program::addError(new SemanticError(error));
			
		}
		
	}


	void setStatement(Node* statement){
		if(statement!=NULL)
			this->_statment=statement;
	}
	virtual void generateCode (){
		typeCheck();
		string cc  = "";
		cc=std::to_string(ForNode::for_label++);

		string ccc = "For";
		ccc+=cc;

		string ccc2 = "endFor";
		ccc2+=cc;

		
		

		MIPS_ASM::printComment("Begin Initializer\n");
		if(_initlizer!=NULL)
			_initlizer->generateCode();
		MIPS_ASM::printComment("End Initializer\n");

		MIPS_ASM::label(ccc);

		MIPS_ASM::printComment("Begin Condition\n");
		if(_condition!=NULL)
			_condition->generateCode();
			MIPS_ASM::printComment("End Condition\n");

		MIPS_ASM::pop("t0");
		MIPS_ASM::beq("t0","0",ccc2);

		MIPS_ASM::printComment("Begin Statement\n");
		if(_statment!=NULL)
			_statment->generateCode();
			MIPS_ASM::printComment("End Statement\n");
				MIPS_ASM::printComment("Begin Increment\n");
		if(_increment!=NULL)
			_increment->generateCode();
			MIPS_ASM::printComment("End Increment\n");
		MIPS_ASM::jump(ccc);
		MIPS_ASM::label(ccc2);

	}
	void toString(){
		cout<<"for Noooode\n";
		if(_initlizer!=NULL)
			_initlizer->toString();
		if(_condition!=NULL)
			_condition->toString();
		if(_statment!=NULL)
		_statment->toString();
	}
	virtual Type* generateType()
	{
		return symbolTable->getType("void") ;
	}
	virtual ~ForNode(void)
	{
	}
};

__declspec(selectany) int ForNode::for_label;

