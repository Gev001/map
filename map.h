
#pragma once
#include<iostream>
using namespace std;
template<class T>
struct Node {
	Node<T>*left;
	T val;
	Node<T>*right;
	Node(Node<T>*left = nullptr, T val = T(), Node<T>*right = nullptr)
	{
		this->left = left;
		this->val = val;
		this->right = right;
	}
};

template<class T>
class map {
public:
	map();
	~map();
	bool empty();
	int Findnode(const T&, Node<T>*);
	int Findnode(T&);

	void insert(const T& item, Node<T>*);

	void top(Node<T>*ptr);

	void size1();
	void top();
	void erase(Node<T>);
	void destroye();//leak toxuma ssenc maqrelov vor pritom esel grem dtor i mej,indz tvuma ha bayc duel knayes eli? 

	void erase();
	void insert(const T&);

	void postorder(Node<T>*);
	void postorder();

	void preorder(Node<T>*);
	void preorder();

	void inorder(Node<T>*);
	void inorder();

	int search(const T&, Node<T>*);
	int search(const T&);




private:
	Node<T>*root;
	int size;
};

