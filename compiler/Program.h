#pragma once
#ifndef PROGRAM_H
#define PROGRAM_H
#include "Error.h"
#include<vector>
class Error;
static class Program
{
private:
	static vector<Error*>errorsList;

public:
	
	static void printErrors();
	static void addError(Error*);

};

#endif;