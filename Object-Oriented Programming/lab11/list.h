#pragma once

#include<iostream>

namespace agh
{
//class node represents element ot list
template<class T>
class node
{
	public:
	node() {value=0; next=0;};
	node(T val, node<T>* n) {value=val; next=n;};
	//stores value
	T value;
	//and pointer to next node. by default 0
	node* next;
};

template<class T>
class list
{
	public:
	//list
	list() {iter=0;};
	//adds element of class T to the end of list
	void push_back(T obj)
	{
		node<T>* temp=new node<T>(obj, 0);
		if(iter==0)
		{
			List=temp;
			endList=temp;
		}
		else
		{
			endList->next=temp;
			endList=temp;
		}
		iter++;
	}
	//print whole list
	void print() const
	{
		//print whole list in order - could be done with iterator
		node<T>* temp=List;
		while(temp->next!=0)
		{
			std::cout << *temp->value << ", ";
			temp=temp->next;
		}
		std::cout << *temp->value;
		std::cout << std::endl;
	};
	//helping class used to iterate through list
	class iterator
	{
		public:
		//makes iterator from pointer to given node - means it operate on this node
		iterator(node<T>* givenNode) {Node=givenNode;};
		//iterator stores only Node but has more functionality
		node<T>* Node;
		//checks if iterators have the same pointer (address of node)
		bool operator!=(iterator iter)
		{
			if(Node==iter.Node)
				return false;
			else return true;
		};
		//operator ++ makes iterator point to next value
		iterator operator++()
		{
			if(*this!=0)
				Node=Node->next;
			else Node=0;

			return *this;
		};
		//returns value of node
		T operator*()
		{
			return Node->value;
		};
		

	};
	//return begin of list stored in List member
	iterator begin() const {return iterator(List);};
	//returns end of list (pointer to null) - it is next pointer of endList
	iterator end() const {return iterator(0);};
	//takes care of memory
	~list()
	{
		node<T>* point=List;
		node<T>* temp=List;
		while(temp!=0)
		{
			delete temp->value;
			point=temp->next;
			delete temp;
			temp=point;
		}
	};

	protected:
	//iter shows how many elements are in the list
	int iter;
	//pointer to begin of list
	node<T>* List;
	//pointer to end
	node<T>* endList;

};

}
