// password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	do
	{
		cin >> a;
		if (a==1234) {
			cout << "you entere correct pass  " << a << endl;
		}
		else
		{
			cout << "wrong password" << endl;
			cin >> a;
		}
		
	} while (a!=1234);
	return 0;
}
