#include "IdentifierNode.h"
#include "AssignNode.h"
#include "DeclerationNode.h"

void DeclerationNode::generateCode(){
	MIPS_ASM::printComment("Decleration Node");

	for (auto i : _identifires){
		MIPS_ASM::printComment("initilizing : " + i.first);
		if (i.second)
		 i.second->generateCode();
		
		else
		{
			MIPS_ASM::printComment("nothing to initilize : " + i.first);

		}

	}
}

bool TypeChecker::isInit = 0;
map<Type *, map<Type *, int > > TypeChecker::_castTable;