#include "EnumHelper.h"
#include "SemanticError.h"

void EnumHelper::createNewEnum(string name,vector<string>idsList,SymbolTable* symbolTable){
	EnumType *enumType=new EnumType(name);
	for(int i=0;i<idsList.size();i++)
	{
		//fuck
		Variable * var=new Variable(idsList.at(i),symbolTable->getType("int"));
		var->setIsConst(true);
		if(enumType->getVariableItems()->get_variable(var->get_name())!=NULL)
		{
			
				string error="Redifinition of enumeratour '";
		error.append(idsList.at(i));
		error.append("'.");
		Program::addError(new SemanticError(error));
		}
		else {
			enumType->getVariableItems()->add_variable(var);
		}
	}
	if(symbolTable->getType(name)==NULL &&symbolTable->getType(name)==NULL&&symbolTable->getType(name)==NULL)
		symbolTable->add_type(enumType);
	else
	{
		
			string error="Use of '";
		error.append(name);
		error.append("' with tag type that does not match previous declaration.");
		Program::addError(new SemanticError(error));
	}
}