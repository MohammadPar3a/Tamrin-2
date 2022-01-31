#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	float sum = 0, a, min = 21, max = 0;

	cout << "Please enter your number of students : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		sum += a;
		if (a <= min) min = a;
		if (a >= max) max = a;
	}
	float avg = sum / n;
	cout << "avg :" << avg << "\n";
	cout << "min :" << min << "\n";
	cout << "max :" << max << "\n";
	return 0;

}