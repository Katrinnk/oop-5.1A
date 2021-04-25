#pragma once
#include <iostream>

using namespace std;

class BadException
{
	string message;
public:
	BadException(string msg) : message(msg) {}
	string what();
};


