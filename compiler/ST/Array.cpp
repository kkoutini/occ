#include"Array.h"
#include "Type.h"



Array::Array(string name,int Dim ,Type* var_type):Variable(name, var_type){
	this->Dimention = Dim;
	this->array_alloc.clear();
}
void Array::set_alloc(vector<int> alloc){
	
	for(int i=0; i<alloc.size(); i++){
		
		this->array_alloc.push_back(alloc.at(i));

	}
	this->Dimention = alloc.size();

}
void Array::toString(){
	Variable::toString();
	cout<<"Diminsion: "<<Dimention<<endl;
	for (int i = 0; i < array_alloc.size(); i++)
	{
		cout<<"Dim["<<i<<"]: "<<array_alloc.at(i)<<"\t";
	}
	cout<<endl;
}

