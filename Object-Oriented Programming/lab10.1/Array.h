#pragma once
#include<vector>

class Array
{
	public:
	void push_back(Base *);
	void print();
	Base * operator[](int);
	~Array();

	protected:
	std::vector<Base*> array;

};
