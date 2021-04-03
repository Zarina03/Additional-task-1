#include<iostream>
#include"Rush27.h"
using namespace std;
void main()
{
	setlocale(0, "rus");
	cout << " 5 / 3 " << endl;
	rush(5, 3);
	cout << " 5 / 1 " << endl;
	rush(5, 1);
	cout << " 1 / 1 " << endl;
	rush(1, 1);
	cout << " 1 / 5 " << endl;
	rush(1, 5);
	cout << " 4 / 4 " << endl;
	rush(4, 4);
	system("pause");
}