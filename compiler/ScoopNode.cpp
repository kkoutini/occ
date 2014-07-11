#include "AsmNode.h"
#include "ast/ScoopNode.h"
#include "ast/DeclerationNode.h"
#include "ast/IfNode.h"

 void ScoopNode::generateCode()
{
	MIPS_ASM::reserveStack(getFrameSize());
	nullVars();
	for (auto i = _nodes.begin(); i != _nodes.end(); i++){
		MIPS_ASM::printComment((*i)->getDebugString());
		(*i)->generateCode();
		// pop the result of the last statement from stack
		dispose(*i);
	}
	//TODO collecting garbage
	//khaled
	MIPS_ASM::releaseStack(getFrameSize());

}
 
 void ScoopNode::nullVars()
 {
	 MIPS_ASM::printComment("nulling vars");
	 for (auto i : _variables){
		 Interface* ifs = dynamic_cast<Interface*>(i.second->getType());
		 if (ifs){
			 MIPS_ASM::sw("0", -i.second->getOffset(), i.second->getOffsetRegister());
		 }
	 }
	 MIPS_ASM::printComment("nulling done");

 }

 void ScoopNode::gcVars()
 {

 }