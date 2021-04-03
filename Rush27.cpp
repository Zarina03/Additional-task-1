#include<iostream>
#include"Rush27.h"
using namespace std;
void rush(int x, int y)
{
	char **mas = new char*[x];
	for(int i = 0; i < x; i++)
		mas[i] = new char[y];
	for(int j = 0; j < y; j++)
	{
		for(int i = 0; i < x; i++)
		{
			if(i == 0 || j == 0 || j == y - 1 || i == x - 1)
			{
				if(((i == 0 || i == x - 1) && j == y - 1))
					mas[i][j] = 'C';
				else
					mas[i][j] = 'B';
				if((i == 0 || i == x - 1) && j == 0)
					mas[i][j] = 'A';
				
				
			}
			else
				mas[i][j] = ' ';
		}
	}
	for(int j = 0; j < y; j++)
	{
		for(int i = 0; i < x; i++)
		{
			cout << mas[i][j];
		}
		cout << endl;
	}
	/*for(int i = 1; i <= x; i++)
	{
		for(int j = 1; j <= y; j++)
		{
			if(i == y || i == 1)
			{
				cout << 'A';
			}
			else
				cout << 'B';
			if(j == x || j == 1)
				cout << 'C';
			else cout << 'B';
		}
		cout << endl;
	}*/
}