#pragma once
#include "VoidNode.h"
#include "CallNode.h"
class ThrowNode :
	public VoidNode
{
public:
	Node* _exception;
	ThrowNode(ScoopNode* scoop, Node* exeption) :VoidNode(scoop), _exception(exeption)
	{}
	virtual void generateCode(){
		MIPS_ASM::printComment("throw node");

		CallNode* exp = dynamic_cast<CallNode*> (_exception);
		if (!exp){
			addError("Must throw exceptions");
			return;
		}
		Interface* it = dynamic_cast<Interface*> (exp->getType());
		if (it && it->isDescendentOf(dynamic_cast<Interface*>(symbolTable->getType("NSException"))))
		{
			exp->generateCode();
			MIPS_ASM::add_instruction("teq $t0,$t0");
		}
		else{
			addError("can't throw but exceetions");
			return;
		}

	}
	virtual ~ThrowNode()
	{
	}
};

