#include "SingleLinkedList.h"

template<class T>
SingleLinkedList<T>::SingleLinkedList()
{
	head = nullptr;
	size = 0;
}

template<class T>
void SingleLinkedList<T>::push_back(const T & obj)
{
	elem<T>*newElem = new elem<T>;
	newElem->obj = obj;
	newElem->next = nullptr;

	if (head == nullptr) {
		head = newElem;
		size = 1;
		return;
	}

	cursor->next = newElem;
	while(cursor->next != nullptr)
		cursor = cursor->next;

	cursor->next = newElem;
	this->size++;


}

template<class T>
void SingleLinkedList<T>::push_front(const T & obj)
{
	elem<T>*newElem = new elem<T>;
	newElem->obj = obj;
	newElem->next = head;
	head = newElem;
	size++;
}

template<class T>
void SingleLinkedList<T>::insert(const T & obj, int position)
{
	if (pos > size || pos < 0) return;

	if (pos == 0) {
		push_front(obj);
		return;
	}
	if (pos == size)
	{
		push_back(obj);
		return;
	}
	elem<T> *newElem = new elem<T>;
	newElem->obj = obj;

	cursor = head;

	for (int i = 0; i < position - 1; i++)
	{
		cursor = cursor->next;
	}

	newElem->next = cursor->next;
	cursor->next = newElem;
	size++;

}

template<class T>
void SingleLinkedList<T>::pop_back(const T & obj)
{
	if (size < 0) return;

	if (size == 1) {
		delete head;
		size = 0;
		head = nullptr;
		return;
	}


	for (int i = 0; i < size - 1; i++)
	{
		cursor = cursor->next;
	}

	delete cursor->next;
	cursor->next = nullptr;

	size--;
}

template<class T>
void SingleLinkedList<T>::pop_front(const T & obj)
{
	if (size == 0) return;
	if (size == 1) {
		delete head;
		head = nullptr;
		size = 0;
		return;
	}

	cursor = head->next;
	delete head;
	head = cursor;
	size--;
}

template<class T>
void SingleLinkedList<T>::erase(const T & obj, int position)
{
}



template<class T>
SingleLinkedList<T>::~SingleLinkedList()
{

}
