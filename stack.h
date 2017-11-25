#ifndef _STACK_H_
#define _STACK_H
#include "node.h"

template <class T>
class stack {
public:
	stack();
	void push(const T&);
	T pop();
private:
	node<T>* m_head;
};

/*Constructor*/
template <class T>
stack<T>::stack(){
	//m_head = nullptr;
}

/*push()*/
template <class T>
void stack<T>::push(const T& item) {
	node<T>* newNode = new node<T>(item);
	newNode->setNext(m_head);
	m_head = newNode;
}

/*pop*/
template <class T>
T stack<T>::pop() {
	T data = m_head->getData();
	node<T>* temp = m_head;
	m_head = temp->getNext();
	delete temp;
	return data;
}
#endif
