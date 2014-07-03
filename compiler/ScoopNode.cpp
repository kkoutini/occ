#include "AsmNode.h"
#include "ast/ScoopNode.h"

 void ScoopNode::generateCode()
{
	MIPS_ASM::reserveStack(getFrameSize());
	for (auto i = _nodes.begin(); i != _nodes.end(); i++){
		MIPS_ASM::printComment((*i)->getDebugString());
		(*i)->generateCode();
		// pop the result of the last statement from stack
		if (!dynamic_cast<ScoopNode*>(*i) && !dynamic_cast<AsmNode*>(*i))
			MIPS_ASM::pop();
	}
	//TODO collecting garbage
	MIPS_ASM::releaseStack(getFrameSize());

}