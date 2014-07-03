#include "AsmNode.h"
#include "ast/ScoopNode.h"
#include "ast/DeclerationNode.h"
#include "ast/IfNode.h"

 void ScoopNode::generateCode()
{
	MIPS_ASM::reserveStack(getFrameSize());
	for (auto i = _nodes.begin(); i != _nodes.end(); i++){
		MIPS_ASM::printComment((*i)->getDebugString());
		(*i)->generateCode();
		// pop the result of the last statement from stack
		dispose(*i);
	}
	//TODO collecting garbage
	MIPS_ASM::releaseStack(getFrameSize());

}