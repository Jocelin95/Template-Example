#ifndef _NODE_H_
#define _NODE_H_
template <class T>
class node {
public:
	node(const T&); /*constructor*/
	const T& getData();/*returns m_data*/
	void setData(const T&); /*sets value of m_data*/
	node<T>* getNext(); /*retruns m_next*/
	void setNext(node<T>*);
private:
	T m_data;
	node<T>* m_next;
};

/*Constructor*/
template <class T>
node<T>::node(const T& data) {
	m_data = data;
	//m_next = nullptr;
}

/*getData() returns m_data*/
template <class T>
const T& node<T>::getData() {
	return m_data;
}

/*setData() sets the value of m_data*/
template <class T>
void node<T>::setData(const T& data) {
	m_data = data;
}

/*getNext() returns the m_next*/
template <class T>
node<T>* node<T>::getNext(){
	return m_next;
}

/*setNext()*/
template <class T>
void node<T>::setNext(node<T>* next){
	m_next = next;
}
#endif 
