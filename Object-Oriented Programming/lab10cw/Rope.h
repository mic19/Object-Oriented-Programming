#pragma once
#include<iostream>
#include<ostream>
#include<vector>

template<class T, int s>
class Rope
{
	public:
	//simple constructor sets size (template parameter), iterators
	//and reserves first array (of size mSize) of memory
	Rope(){mSize=s; iterArray=iterVector=0; mCapacity=mSize; array.push_back(new T[mSize]);};
	//copy constructor makes an object from different object
	template<int c>
	Rope(Rope<T,c>& obj)
	{
		mSize=s;
		iterArray=iterVector=0;
		mCapacity=mSize;
		array.push_back(new T[mSize]);
		std::vector<T*> array=obj.getArray();
		typename std::vector<T*>::iterator it;
		for(it=array.begin(); it!=array.end()-1; it++)
		{
			for(int i=0; i<obj.size(); i++)
				this->operator,((*it)[i]);
		}
		for(int i=0; i<obj.getIterArray(); i++)
			this->operator,((*it)[i]);
	};
	//operator , adds elements to Rope's array
	//(which is inside vector object
	Rope& operator,(T neigbour)
	{
		if(iterArray<mSize)
		{
			(array[iterVector])[iterArray]=neigbour;
			iterArray++;
		}
		else
		{
			array.push_back(new T[mSize]);
			iterVector++;
			iterArray=0;
			(array[iterVector])[iterArray]=neigbour;
			iterArray++;
			mCapacity+=mSize;
		}
		return *this;
	};
	//returns object at index - if index is not at first array
	//in vector function looks for it in the next
	//under index-mSize (since one array's size is mSize)
	//and so on
	T at(int index) const
	{
		return (array[index/mSize])[index%mSize];
	};
	//returns how much data can be stored at the moment
	int capacity() const {return mCapacity;};
	//returns size of one array in vector
	int size() const {return mSize;};
	//used to write data from vector
	int getIterVector() const {return iterVector;};
	//used to write data from vector
	int getIterArray() const {return iterArray;};
	//may be used to access vector quickly
	std::vector<T*>& getArray() {return array;};
	//destructor takes care of memory
	~Rope()
	{
		for(typename std::vector<T*>::iterator it=array.begin(); it!=array.end(); it++)
			delete[] *it;
	};

	protected:
	//size of one array in vector
	int mSize;
	//capacity - current size of vector
	int mCapacity;
	//iterator for array in vector (0 - mSize-1)
	int iterArray;
	//iterator for vector
	int iterVector;
	//vector
	std::vector<T*> array;

	template<class Z, int c>
	friend std::ostream& operator<<(std::ostream& stream, Rope<Z,c>& rope);

};

template<class T, int s>
std::ostream& operator<<(std::ostream& stream, Rope<T,s>& rope)
{
	int i,j;
	for(i=0; i<rope.iterVector; i++)
	{
		for(j=0; j<rope.size(); j++)
			stream << (rope.array[i])[j] << " ";
	}
	for(j=0; j<rope.iterArray; j++)
		stream << (rope.array[rope.iterVector])[j] << " ";

	return stream;
};


