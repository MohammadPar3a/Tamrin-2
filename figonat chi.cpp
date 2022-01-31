

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter your starter elements : ";
	cin >> n;
	int a = 1, b = 1;
	int c;
	cout << a << "\t";
	cout << b << "\t";
	int i = 2;
	while (i < n)
	{
		c = a + b;
		cout << c << "\t";
		a = b;
		b = c;
		i++;
	}
	return 0;
}