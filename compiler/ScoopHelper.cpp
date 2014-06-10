#include "ScoopHelper.h"
#include "SemanticError.h"
#include "ast\FunctionNode.h"
#include"ast\ScoopNode.h"
#include "ClassNode.h"
#include "Streams.h"
FunctionNode* ScoopHelper::createNewFunctionNode( Method* method, Interface* interface){
	FunctionNode* scoop;
	
		scoop = new FunctionNode(dynamic_cast<ScoopNode*>(interface->getScoop()), method);
		scoop->setInterface ( interface);
		scoop->add_variable(new Variable("self", interface, true));

		for (int i = 0; i <method->get_variables().size(); i++)
		{
			for (auto c : method->get_variables().at(i)->_vars)
			{
				scoop->add_variable(c);
			}

		}
		//functionNode=new FunctionNode(scoop,method);
		if (method->getF() != NULL)
			Streams::WTF() << "  getF is not null \n\n\\\n";

		method->setFunctionNode(scoop);
		// method->getF()->generateCode();
	return scoop;
}


ScoopNode* ScoopHelper::createNewScoop(ScoopNode* parentScoop){
	ScoopNode* scoop;
	if(parentScoop==NULL){
		//should never happen
		Streams::WTF() << "  parent for scoop is null\n\n\\\n";
		scoop = NULL;
	}
	else{
		scoop=new ScoopNode(parentScoop);
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


