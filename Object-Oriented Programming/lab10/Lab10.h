#pragma once
#include<string>
#include<vector>
#include<iostream>

class Base
{
	public:
	virtual void Print() {};	
	virtual ~Base() {};
};

template<class T>
class Data : public Base
{
	public:
	Data(std::string givenName, T givenValue) {name=givenName; value=givenValue;};
	void SetValue(T val) {value=val;};
	virtual void Print() {std::cout << name<< ": " << value << std::endl;};

	protected:
	std::string name;
	T value;

};

class ArrayOfVariables
{
	public:
	ArrayOfVariables(int givenSize) {size=givenSize;};
	template<class Type>
	Data<Type>* CreateAndAdd(std::string str, Type val) {Data<Type> * object = new Data<Type>(str, val); array.push_back(object); return object;};
	void Print() {for(unsigned int i=0; i<array.size(); i++) array[i]->Print();};
	~ArrayOfVariables() {for (std::vector<Base*>::iterator iter = array.begin(); iter != array.end(); ++iter)
		delete *iter;};
	protected:
	unsigned int size;
	std::vector<Base*> array;

};

template<class T>
class VariableWithUnits : public Data<T>
{
	public:
	VariableWithUnits(std::string str, T val, std::string strUnit) : Data<T>(str, val) {unit=strUnit;};
	virtual void Print() {std::cout << Data<T>::name << ": " << Data<T>::value << " " << unit << std::endl;};

	protected:
	std::string unit;

};

typedef Data<double> VariableDouble;
typedef Data<float> VariableFloat;
typedef Data<int> VariableInt;
typedef Data<char> VariableChar;
typedef Data<bool> VariableBool;


