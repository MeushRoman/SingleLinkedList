#pragma once
template<class T>
struct elem {
	T obj;
	elem<T> *next;
};

template<class T>
class SingleLinkedList
{
	elem<T> *head;
	int size;
	elem<T> *cursor;
public:
	SingleLinkedList();

	void push_back(const T&obj);
	void push_front(const T&obj);
	void insert(const T&obj, int position);
	void pop_back(const T&obj);
	void pop_front(const T&obj);
	void erase(const T&obj, int position);
	~SingleLinkedList();
};

