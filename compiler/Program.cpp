#include "Program.h"



void Program:: printErrors(){
	cout<<"\nErrors:\n";
		for(int i=0;i<errorsList.size();i++){
			errorsList.at(i)->toString();
			cout<<endl;
		}
		cout<<"\n";
}
vector<Error*> Program::errorsList;
void Program::addError(Error* error){
	if(error!=NULL){
		errorsList.push_back(error);
	}
}
