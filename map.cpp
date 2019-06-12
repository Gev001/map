#include"set.h"
template<class T>
inline map<T>::map() :root(nullptr) { cout << "def ctor \n"; }

template<class T>
map<T>::~map()
{
	cout << "dtor: \n";
	
}

template<class T>
inline bool map<T>::empty()
{
	return root == nullptr;
}

template<class T>
int map<T>::Findnode(const T &item, Node<T>*ptr)
{
	ptr = root;
	if (ptr->val == item) { return item; }
	else if (item > root->val) { Findnode(T&item, ptr->right); }
	else { Findnode(T&item, ptr->left); }
}

template<class T>
int map<T>::Findnode(T &item)
{
	return Findnode(T& item, root);
}

template<class T>
void map<T>::insert(const T & item, Node<T>*ptr)
{
	ptr = root;
	if (ptr == nullptr) { ptr = new Node<T>(nullptr, item, nullptr); }
	else {
		
		if (item < ptr->val)
		{
			if (ptr->left != nullptr) { insert(item, ptr->left); }
			else {
				ptr->left = new Node<T>(nullptr, item, nullptr);
			}
		}
		if (item > ptr->val)
		{
			if (ptr->right != nullptr)
			{
				insert(item, ptr->right);
			}
			else
			{
				ptr->right = new Node<T>(nullptr, item, nullptr);

			}
		}
	}
	++size;

}

template<class T>
void map<T>::top(Node<T>* ptr)
{
	ptr = root;
	if (ptr == nullptr) { cout << "chka element: \n"; return; }
	else
	{
		if (ptr->left != nullptr) { ptr = ptr->left; }
		else if (ptr->right != nullptr) { ptr=ptr->right; }
		cout << ptr->val;
	}
	

}

template<class T>
void map<T>::size1()
{
	cout << "\n size= " << size << endl;
}

template<class T>
void map<T>::top()
{
	top(root);
}

template<class T>
void map<T>::erase(Node<T>ptr)
{
	ptr = root;
	if (empty()) { throw exception("UNDERFLOW: \n"); }
	else
	{
		if (ptr->left != nullptr) { ptr = ptr->left; }
		if (ptr->right != nullptr) { ptr = ptr->right; }
		delete ptr;
		ptr = nullptr;
	}
	--size;

}

template<class T>
void map<T>::destroye()
{
	delete root;
	root = nullptr;
}

template<class T>
void map<T>::erase()
{
	erase(root);
}

template<class T>
inline void map<T>::insert(const T &key)
{
	insert(key, root);

}

template<class T>
void map<T>::postorder(Node<T>*ptr)
{
	ptr = root;
	if (ptr == nullptr) { cout << "chka element"; return; };
	postorder(ptr->left);
	postorder(ptr->right);
	cout << ptr->val << endl;
}

template<class T>
void map<T>::postorder()
{
	postorder(root);
}

template<class T>
void map<T>::preorder(Node<T>*ptr)
{

	ptr = root;
	if (ptr == nullptr) { return; }
	cout << ptr->val << endl;
	preorder(ptr->left);
	preorder(ptr->right);
}

template<class T>
void map<T>::preorder()
{
	preorder(root);
}

template<class T>
void map<T>::inorder(Node<T>*ptr)
{
	ptr = root;
	if (ptr == nullptr) { return; }
	inorder(ptr->left);
	cout << root->val;
	inorder(ptr->right);
}

template<class T>
void map<T>::inorder()
{
	inorder(root);
}

template<class T>
int map<T>::search(const T &key, Node<T>*ptr)
{
	ptr = root;
	if (ptr != nullptr)
	{
		if (ptr->val == key) { return key; }
		else if (key > ptr->val) { return search(key,ptr->right); }
		else if (key < ptr->val) { return search(key,ptr->left); }
	}
}

template<class T>
int map<T>::search(const T &key)
{
	return search(key, root);
}

