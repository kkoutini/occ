#include "StructHelper.h"
#include "SemanticError.h"
extern int lineNum;
extern int colNum;
extern string sourceFile;
Struct* StructHelper::createNewStruct(string name,SymbolTable* symbolTable){
	Struct *myStruct=new Struct(name);
					if(!symbolTable->checkTypeExist(name))
					symbolTable->add_type(myStruct);
					else {
						string error="Redifinition of '";
				error.append(name);
				error.append("'.");
				Program::addError(new SemanticError(error, colNum, lineNum, sourceFile));
					}
					return myStruct;
}
void StructHelper::addDataMembers(Struct* myStruct,vector<string>idsList,Type* type,vector<Array*>arrayList,bool isConst,SymbolTable* symbolTable){
	
	if(type!=NULL){
		for(int i=0;i<idsList.size();i++)
		{
			Variable *var=new Variable (idsList.at(i),type,"@public");
			if(isConst)
				var->setIsConst(true);
			if(myStruct->getVariableItems()-> get_variable(var->get_name())==NULL){
				myStruct->getVariableItems()-> add_variable(var);
			}
			else {
				string error="Duplicate member '";
				error.append(idsList.at(i));
				error.append("'.");
				Program::addError(new SemanticError(error, colNum, lineNum, sourceFile));
			}
		}
		for(int i=0;i<arrayList.size();i++)
		{


			arrayList.at(i)->setType(type);
			if(isConst)
				arrayList.at(i)->setIsConst(true);
			if(myStruct->getVariableItems()-> get_variable(arrayList.at(i)->get_name())==NULL){
				myStruct->getVariableItems()-> add_variable(arrayList.at(i));
			}
			else {
				string error="Duplicate member '";
				error.append(arrayList.at(i)->get_name());
				error.append("'.");
				Program::addError(new SemanticError(error, colNum, lineNum, sourceFile));
			}
		}
	}

}