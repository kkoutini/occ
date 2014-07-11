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
	{
		if (Garbage_Collect){
			if (dynamic_cast<Interface*>(n->getType())){
				MIPS_ASM::pop("a0");
				MIPS_ASM::push("ra");
				MIPS_ASM::jal("global_dispose");
				MIPS_ASM::pop("ra");

			}else
				MIPS_ASM::pop();

		}
		else{
			MIPS_ASM::pop();
		}
	}
}