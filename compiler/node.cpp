#include "AsmNode.h"
#include "ast/ScoopNode.h"
#include "ast/DeclerationNode.h"
#include "ast/IfNode.h"
#include "voidNode.h"

void Node::dispose(Node* n){
//	if (!dynamic_cast<ScoopNode*>(n) && !dynamic_cast<AsmNode*>(n)
	//	&& !dynamic_cast<DeclerationNode*>(n) && !dynamic_cast<IfNode*>(n))
		//MIPS_ASM::pop();
	 if (!dynamic_cast<VoidNode*>(n))
		MIPS_ASM::pop();

}