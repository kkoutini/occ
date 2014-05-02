#include "LongIdHelper.h"
#include "Program.h"
#include "SemanticError.h"


vector<string> LongIdHelper::identifierList;

void LongIdHelper::addIdentifier(string identifier){
	identifierList.push_back(identifier);
}


Variable* LongIdHelper::checkIdenentifier(ScoopNode* scoop,Interface* interf,string identifier){
	Variable* var=scoop->get_variable(identifier);
	if(var==NULL){
		var=interf->getVariableItems()-> get_variable(identifier);
	if(var==NULL )
	{
		if(interf->getInheretInterface()!=NULL){
			var=interf->getInheretInterface()->getVariableItems()->  get_variable(identifier);
		if(var==NULL){
			string error = string("Error:undefined identifier : ") + identifier;
		Program::addError(new SemanticError(error));
		}
		}
		else{
			string error = string("Error:undefined identifier : ") + identifier;
		Program::addError(new SemanticError(error));
		}
	}
	else return var;
	}
	else return var;

}
