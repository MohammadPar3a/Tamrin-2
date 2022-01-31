#include <iostream>
#include <conio.h> 
#include <string.h> 

using namespace std;

int main()
{
	int sum = 0;
	int a;
	string E;
	while (E != "exit")
	{
		cout << "Please enter your numbers :";
		cin >> a;
		sum += a;
		if (a == 0)
		{
			cout << "Please type exit if you want to finish\t";
			cin >> E;
		}

	}
	cout << "Sum = " << sum;

	return 0;
}