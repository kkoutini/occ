#include "ProtocolHelper.h"
#include "SemanticError.h"

Protocol* ProtocolHelper ::createNewProtocol(string name,SymbolTable *symbolTable ){
	Protocol * protocol=new Protocol(name);
	if(!symbolTable->checkTypeExist(name))
		symbolTable->add_type(protocol);

	else {
		string error="Duplicate protocol difinition of '";
		error.append(name);
		error.append("' ignored.");
		Program::addError(new SemanticError(error));
	}
	return protocol;
}
void ProtocolHelper::addMethods(Protocol* protocol,vector<Method*>methodsList){
		for(int i=0 ;i<methodsList.size();i++)
			if(!protocol->getMethodsItem()-> addMethod(methodsList.at(i)) &&methodsList.at(i)!=NULL)
		{
			string error="Duplicate declaration of method '";
			error.append(methodsList.at(i)->get_name());
			error.append("'.");
			Program::addError(new SemanticError(error));
		}
}
void ProtocolHelper::addInheritedProtocol(Protocol* protocol,vector<string> idsList,SymbolTable* symbolTable){
	for(int i=0;i<idsList.size();i++)
	{
		Type* type=symbolTable->getType(idsList.at(i));
		if(type!=NULL)
		{
			
				protocol->add_inherited_protocol(dynamic_cast<Protocol*>(type));
		}
			else{
				string error="Can not find protocol declaration for '";
				error.append(idsList.at(i));
				error.append("'.");
				Program::addError(new SemanticError(error));
			}
		}
	
	

}
