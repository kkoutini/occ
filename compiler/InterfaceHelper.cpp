#include "InterfaceHelper.h"
#include "SemanticError.h"
#include "ast\FunctionNode.h"
#include "ClassNode.h"
extern SymbolTable* symbolTable;

void InterfaceHelper::addMethods(Interface* interface,vector<Method*>methodsList){
	for(int i=0 ;i<methodsList.size();i++)
		if(!interface->getMethodsItem()-> addMethod(methodsList.at(i)) &&methodsList.at(i)!=NULL)
		{
			string error="Duplicate declaration of method'";
			error.append(methodsList.at(i)->getSignature());

			error.append("'.");
			Program::addError(new SemanticError(error));

		}
}
void InterfaceHelper::addInheritedProtocol(Interface* interface,vector<string>idsList,SymbolTable* symbolTable){
	for(int i=0;i<idsList.size();i++)
	{
		Type* type=symbolTable->getType(idsList.at(i));
		if(type!=NULL)
		{
			if(dynamic_cast<Protocol*>(type)){
				interface->add_son_protocol(dynamic_cast<Protocol*>(type));
			}
			else{
				string error="Can not find protocol declaration for '";
				error.append(idsList.at(i));
				error.append("'.");
				Program::addError(new SemanticError(error));
			}
		}
		else {
			string error="Can not find protocol declaration for '";
			error.append(idsList.at(i));
			error.append("'.");
			Program::addError(new SemanticError(error));
		}
	}

}
void InterfaceHelper::addDataMembers(Interface* interface,vector<string>idsList,Type* type,vector<Array*>arrayList,bool isConst,SymbolTable* symbolTable,string visibility){

	if(type !=NULL){
		for(int i=0;i<idsList.size();i++)
		{
			Variable* var=new Variable (idsList.at(i),type,visibility);
			if(isConst)
				var->setIsConst(true);
			if(interface->getVariableItems()-> get_variable(var->get_name())==NULL){
				interface-> getVariableItems()-> add_variable(var);
			}
			else {
				string error="Duplicate member '";
				error.append(idsList.at(i));
				error.append("'.");
				Program::addError(new SemanticError(error));
			}
		}
		for(int i=0;i<arrayList.size();i++)
		{

			arrayList.at(i)->setType(type);
			arrayList.at(i)->setAccessModifier(visibility);
			if(isConst)
				arrayList.at(i)->setIsConst(true);
			if(interface->getVariableItems()->  get_variable(arrayList.at(i)->get_name())==NULL){
				interface->getVariableItems()->  add_variable(arrayList.at(i));
			}
			else {
				string error="Duplicate member '";
				error.append(arrayList.at(i)->get_name());
				error.append("'.");
				Program::addError(new SemanticError(error));
			}
		}
	}


}
Method* InterfaceHelper::createNewMethod(Type* type, SymbolTable* symbolTable, string name, vector<DeclerationSelector*>selectorsList, bool isStatic){
	
	Method* method=NULL;
	if(type!=NULL)
	{
		method =new Method(name,type);
		method->set_static(isStatic);

		for(int i=0;i<selectorsList.size();i++)
		{
			if(!method->addSelector(selectorsList.at(i)))
			{
				string error="Redifinition of selector name '";
				error.append(selectorsList.at(i)->get_name());
				error.append("'.");
				Program::addError(new SemanticError(error));
			}
		}
	
	}
	
	return method;
}
void InterfaceHelper:: implementMethods(vector<Method*>methodsList,Interface* interface){
	if(interface!=NULL){

		for(int i=0 ;i<methodsList.size();i++){
			Method* tempMethod=interface->getMethodsItem()-> getMethod(methodsList.at(i)->get_name(),methodsList.at(i)->get_return_type(),methodsList.at(i)->get_variables(),methodsList.at(i)->get_static());

			if(tempMethod!=NULL){
				if(!Method::checkReturnType(methodsList.at(i),tempMethod)){
						string error="Conflicting return type in implementation of '";
								error.append(tempMethod->get_name());
			error.append("' (");
			error.append(tempMethod->get_return_type()->get_name());
			error.append(") vs (");
				error.append(methodsList.at(i)->get_return_type()->get_name());
				error.append(").");
			Program::addError(new SemanticError(error));
				}
				Method::checkParameters(methodsList.at(i),tempMethod);
				FunctionNode* fn = dynamic_cast<FunctionNode*>(methodsList.at(i)->get_Scoop());
				tempMethod->set_scoop(fn);
			}
			else 
			{

				if(!interface->getMethodsItem()-> addMethod(methodsList.at(i)) &&methodsList.at(i)!=NULL){
					
								string error=" Duplicate method declaration'";
								error.append(methodsList.at(i)->get_name());
			error.append("'.");
			Program::addError(new SemanticError(error));
				}

			}}
	}
}
Interface* InterfaceHelper:: checkImplementation(string typeS,SymbolTable* symbolTable,string inheritedInterface){
	Type* type=symbolTable->getType(typeS);
	Interface *interface=NULL;
	if(type!=NULL && dynamic_cast<Interface*>(type) ){
		if((dynamic_cast<Interface*>(type))->getStatus()==completness::under_constraction){
			interface=dynamic_cast<Interface*>(type);
			interface->setStatus(completness::implemented);
			if(interface->getInheretInterface()!=NULL){
				if(interface->getInheretInterface()->get_name()!=inheritedInterface){
				
						
						string error="Conflicting super class name '";
			error.append(inheritedInterface);
			error.append("'.");
			Program::addError(new SemanticError(error));
				}
			}
			else{
				interface->setInheritInterface(dynamic_cast<Interface*> (symbolTable->getType("NSObject")));
				//interface->setInheritInterface();
			//string error="Class '";
		//	error.append(typeS);
		//	error.append("' defined without specifying a base class.");
			//Program::addError(new SemanticError(error));

			}
		}else{ 
		
			string error="Reimplementation of class '";
			error.append(typeS);
			error.append("'.");
			Program::addError(new SemanticError(error));
		}
	}
	else{
		
			string error="Cannot find interface declaration for '";
			error.append(typeS);
		
			
			error.append("'.");
			Program::addError(new SemanticError(error));
	}
	return interface;
}
Interface* InterfaceHelper ::createNewInterface(string name,string inheritedInterfaceName,SymbolTable *symbolTable ){
	Interface * interface = dynamic_cast<Interface*>( symbolTable->getType(name));
	if(inheritedInterfaceName!="")
		if(symbolTable->getType(inheritedInterfaceName)!=NULL)
		{
			interface->setInheritInterface(dynamic_cast<Interface*>(symbolTable->getType(inheritedInterfaceName)));
		}
		else {
			string error="Can not find interface declaration for '";
			error.append(inheritedInterfaceName);
			error.append("', superclass of '");
			error.append(name);
			error.append("'.");
			Program::addError(new SemanticError(error));
		}
		bool interfaceState = false;
		bool test = symbolTable->getInterfaceState(name);
		if (symbolTable->getInterfaceState(name)==false)
		{
			symbolTable->set_interfaceState(name, true);
			interfaceState = true;
			bool test2 = symbolTable->getInterfaceState(name);
		}

		else if (symbolTable->getInterfaceState(name) == true)
		{
			interfaceState = false;
		}
      /*  if(!symbolTable->checkTypeExist(name)&&interfaceState==false)
			symbolTable->add_type(interface);*/
		//else
		if (interfaceState==false)
		{
			string error="Duplicate interface difinition for class '";
			error.append(name);
			error.append("'.");
			Program::addError(new SemanticError(error));
		}
		return interface;
}
