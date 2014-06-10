#pragma once
#include <iostream>
using namespace std;
class Streams
{
protected:
	ostream* _wtf;
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
	{
		return cout;
	}

};

