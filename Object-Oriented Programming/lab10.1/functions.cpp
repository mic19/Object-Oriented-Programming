#include "Base.h"
#include "Array.h"

//Base class for Fibonaci
void Base::print()
{

}

//Array class to store Fibonaci template classes
void Array::push_back(Base * pointer)
{
	array.push_back(pointer);
}

void Array::print()
{
	for(std::vector<Base *>::iterator iter=array.begin(); iter!=array.end(); iter++)
		(*iter)->print();
}

Base * Array::operator[](int index)
{
	return array[index];
}

Array::~Array()
{
	for(std::vector<Base *>::iterator iter=array.begin(); iter!=array.end(); iter++)
		delete *iter;
}


