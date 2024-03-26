#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of rows : ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(9);
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << "* ";
		}
		cout << endl;
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << setw(7);
		for (int a = 0; a < n - i; a++)
		{
			cout << " ";
		}
		for (int b = 0; b < 3+i; b++)
		{
			cout  << "* ";
		}
		
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << setw(5);
		for (int a = 0; a < n - i; a++)
		{
			cout << " ";
		}
		for (int b = 0; b < 5 + i; b++)
		{
			cout << "* ";
		}

		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << setw(3);
		for (int a = 0; a < n - i; a++)
		{
			cout << " ";
		}
		for (int b = 0; b < 7 + i; b++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		
		for (int a = 0; a < n - i; a++)
		{
			cout << " ";
		}
		for (int b = 0; b < 9 + i; b++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0; i < n - 1; i++)
	{
		cout << setw(11);
		for (int a = 0; a < n-1 ; a++)
		{
			cout << "*"<<" ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
