#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int h = 0, m = 0, s = 0;
	cout << "Please enter your hour : minute : seconds\n";
	cin >> h >> m >> s;

	int seconds = (h * 3600) + (m * 60) + (s);

	cout << "Result is (in seconds) : " << seconds;

	return 0;
}
