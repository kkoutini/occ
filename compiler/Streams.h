#pragma once
#include <iostream>
#include<sstream>
#include<fstream>
using namespace std;
class Streams
{
protected:
	ostream* _wtf;
	static ofstream _verbose;
public:

	Streams()
	{
	}
	/*
		what a terrible failure 
		errors should never happen
	*/
	static ostream& WTF()
	{
		cout << "######################################\nWTF\nshould never happen\n\n\n";
		verbose() << "######################################\nWTF\nshould never happen\n\n\n";
		return cout;
	}
	/*
	standard output
	*/
	static ostream& out()
	{
		return cout;
	}
	/*
	detaild information not required by every-day-use
	*/
	static ostream& verbose()
//	static stringstream& verbose()
	{
		return _verbose;
	//	return cout;
	}

};

