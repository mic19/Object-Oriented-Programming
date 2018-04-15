#pragma once
#include "Base.h"
#include "Array.h"
#include<iostream>

//template of Fibonaci class
template<int number>
class Fibonaci : public Base
{
	public:
	static int value;
	void print() {std::cout << "Fibonaci(" << value << ") " << value << std::endl;};

	protected:

};
//static variable of Fibonaci - calculated during compilation
template<int number>
int Fibonaci<number>::value=Fibonaci<number-1>::value+Fibonaci<number-2>::value;

//classes Fibonaci 1 and 2. no use of templates here
template<>
class Fibonaci<1> : public Base
{
	public:
	static int value;
	void print() {std::cout << "Fibonaci(" << value << ") " << value << std::endl;};

	protected:

};
int Fibonaci<1>::value=1;

template<>
class Fibonaci<2> : public Base
{
	public:
	static int value;
	void print() {std::cout << "Fibonaci(" << value << ") " << value << std::endl;};

	protected:

};
int Fibonaci<2>::value=1;


