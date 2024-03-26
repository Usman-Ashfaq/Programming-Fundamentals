#include<iostream>
using namespace std;
int main()
{
#include<iostream>
#include<cmath>
using namespace std;
int main() 
	{

		int unitconsume;
		int bill;
		int totalbill;
		float tax;
		float netbill;
		cout << " Enter the units : ";
		cin >> unitconsume;
		if (unitconsume <= 100) 
		{
			bill = unitconsume * 5;
			totalbill = bill + 200;
			cout << "Your Bill is :" << totalbill<<endl;

		}
		else if (unitconsume > 100 && unitconsume <= 200) 
		{
			bill = unitconsume * 8;
			totalbill = bill + 200;
			cout << "Your Bill is :" << totalbill<< endl;
		}
		else
		{
			bill = unitconsume * 10;
			cout << "bill is : " << bill<<endl;
			totalbill = bill + 200;
			cout << "total bill is :" << totalbill<<endl;
			if (totalbill >= 3000) 
			{
				tax = totalbill * 0.05;
				netbill = tax + totalbill;
				cout << "Your Final bill is: "<< netbill << endl;
			}
		}
		system("pause");
		return 0;

	}


