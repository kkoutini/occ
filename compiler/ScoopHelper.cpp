#include "ScoopHelper.h"
#include "SemanticError.h"
#include "ast\FunctionNode.h"

ScoopNode* ScoopHelper::createNewScoop(ScoopNode* parentScoop,Method* method){
	ScoopNode* scoop;
	if(parentScoop==NULL){
		scoop=new ScoopNode(NULL,NULL);
		for (int i = 0; i <method->get_variables().size(); i++)
		{
			scoop->add_variable( method->get_variables().at(i)->getVariable());
		}
		method->set_scoop(scoop);
			//functionNode=new FunctionNode(scoop,method);
			 method->setFunctionNode(new FunctionNode(scoop,method));
			// method->getF()->generateCode();
	}
	else{
		scoop=new ScoopNode(parentScoop,NULL);
		//parentScoop->addInternalScoop(scoop);
	}
	return scoop;
}

void ScoopHelper::addVariables(vector<string>identifierList,vector<Array*>arrayList,Type* type,bool isConst,ScoopNode* scoop){
    
												if(type !=NULL){
													for(int i=0;i<identifierList.size();i++)
												{
													Variable * var=new Variable (identifierList.at(i),type);
													if(isConst)
													  var->setIsConst(true);
													if(!	scoop->add_variable(var)){
														string errorMessage="Redifinition of '";
														errorMessage.append(var->get_name());
														errorMessage.append("'.");
														Program::addError(new SemanticError(errorMessage));
														
													}
														 
												}
													for(int i=0;i<arrayList.size();i++)
												{
													
													arrayList.at(i)->setType(type);
													
													if(isConst)
													  arrayList.at(i)->setIsConst(true);
			     									if(!	scoop->add_variable(arrayList.at(i)))
													{
													
															
																									string error="Redifinition of '";
		error.append(arrayList.at(i)->get_name());
		error.append("'.");
		Program::addError(new SemanticError(error));
													}
												}
												}
												

}


