#include "Error.h"


Error::Error(string message){
	this->message=message;
}
void Error::toString(){

	cout << message << "::";
	cout << lineNo<<"::";
	cout << colNo<<"::";
	cout << file;

}
