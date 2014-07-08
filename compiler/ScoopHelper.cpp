#include "ScoopHelper.h"
#include "SemanticError.h"
#include "ast\FunctionNode.h"
#include"ast\ScoopNode.h"
#include "ClassNode.h"
#include "Streams.h"
#include "ST\ArrayType.h"
extern int lineNum;
extern int colNum;
extern string sourceFile;
FunctionNode* ScoopHelper::createNewFunctionNode(Method* method, Interface* interface){
	FunctionNode* scoop;

	scoop = new FunctionNode(dynamic_cast<ScoopNode*>(interface->getScoop()), method);
	scoop->setInterface(interface);
	scoop->add_variable(new Variable("self", interface, true));

	for (int i = 0; i < method->get_variables().size(); i++)
	{
		for (auto c : method->get_variables().at(i)->_vars)
		{
			scoop->add_variable(c);
		}

	}
	//functionNode=new FunctionNode(scoop,method);
	if (method->getFunctionNode() != NULL)
		Streams::WTF() << "  getF is not null \n\n\\\n";

	method->setFunctionNode(scoop);
	// method->getFunctionNode()->generateCode();
	return scoop;
}


ScoopNode* ScoopHelper::createNewScoop(ScoopNode* parentScoop){
	ScoopNode* scoop;
	if (parentScoop == NULL){
		//should never happen
		Streams::WTF() << "  parent for scoop is null\n\n\\\n";
		scoop = NULL;
	}
	else{
		scoop = new ScoopNode(parentScoop);
		//parentScoop->addInternalScoop(scoop);
	}
	return scoop;
}

void ScoopHelper::addVariables(vector<string>identifierList, vector<Array*>arrayList, Type* type, bool isConst, ScoopNode* scoop){

	if (type != NULL){
		for (int i = 0; i < identifierList.size(); i++)
		{
			Variable * var = new Variable(identifierList.at(i), type);
			if (isConst)
				var->setIsConst(true);
			if (!scoop->add_variable(var)){
				string error = "Redifinition of '";
				error.append(var->get_name());
				error.append("'.");
				Program::addError(new SemanticError(error, colNum, lineNum, sourceFile));

			}

		}
		for (int i = 0; i < arrayList.size(); i++)
		{
			Type* t = type;
			for (int j = (int)arrayList.at(i)->array_alloc.size() - 1; j >= 0; j--)
			{
				t = new ArrayType(t, arrayList.at(i)->array_alloc.at(j));
			}
			Variable * var = new Variable(arrayList.at(i)->get_name(), t);

			//arrayList.at(i)->setType(type);

			if (isConst)
				var->setIsConst(true);
			if (!scoop->add_variable(var))
			{

				//hasson add line colum
				string error = "Redifinition of '";
				error.append(arrayList.at(i)->get_name());
				error.append("'.");
				Program::addError(new SemanticError(error, colNum, lineNum, sourceFile));
			}
		}
	}


}


