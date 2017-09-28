/*
	Author: Caleb Johnson
	Stack.h
*/
#include <iostream>

using namespace std;

template <class T>

class Stack {
private:
	T a[100];
	int length;
public:
	Stack()
	{
		length = 0;
	}
	~Stack() {}

	void push(T newItem)
	{
		a[length] = newItem;
		length++;
	}
	void pop()
	{
		length--;
	}
	T top()
	{
		return a[length - 1];
	}
	int getLength()
	{
		return length;
	}

};
