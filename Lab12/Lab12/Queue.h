#pragma once

#include <list>
#include <iostream>
using std::list;

template <class T>
class Queue : private list<T>
{
public:
	Queue();
	Queue(Queue<T> &copy);
	~Queue();

	void enqueue(T newItem);
	T dequeue();

	void printQueue();

private:
	list<T> theList;
};

template <class T>
Queue<T>::Queue() : list()
{
	
}

template <class T>
Queue<T>::Queue(Queue &copy) : list(copy)
{

}

template <class T>
Queue<T>::~Queue() 
{
	// Nothing to see here.
}


template <class T>
void Queue<T>::enqueue(T newItem)
{
	theList.push_back(newItem);
}

template <class T>
T Queue<T>::dequeue()
{
	T item;
	item = theList.front();
	theList.pop_front();
	return item;
}

template <class T>
void Queue<T>::printQueue()
{
	for (auto i: theList)
	{
		std::cout << i << " <- ";
	}
	std::cout << std::endl;
}
