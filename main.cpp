#include<iostream>
#include"Source.cpp"
int main()
{
	map<int>x;
	for (int i = 0; i < 30; ++i)
	{
		x.insert(i);
	}
	cout << "top= "; x.top();
	x.size1();
	cout << x.search(12) << endl;
	system("pause");
}