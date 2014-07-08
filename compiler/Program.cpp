#include "Program.h"



void Program::printErrors(){
	cout << "\nErrors:\n";
	for (int i = 0; i<errorsList.size(); i++){
		errorsList.at(i)->toString();
		cout << endl;
	}
	cout << "\n";
	cout << "\nWarning:\n";
	for (int i = 0; i<warningList.size(); i++){
		warningList.at(i)->toString();
		cout << endl;
	}
	cout << "\n";
}


vector<Error*> Program::errorsList;
vector<Error*> Program::warningList;
void Program::addError(Error* error){
	if (error != NULL){
		errorsList.push_back(error);
	}
}
void Program::addWarning(Error* error){
	if (error != NULL){
		warningList.push_back(error);
	}
}
