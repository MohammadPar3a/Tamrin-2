#include <iostream>
#include <random>

using namespace std;

int main()
{
	int n, r;
	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		r = rand() % 6 + 1;
		cout << r << endl;
		if (r == 6)
		{
			for (int i = 0; i < 1; i++)
			{
				cout << "You are lucky and you can do it again ... :)))" << "\t";
				r = rand() % 6 + 1;
				cout << r << endl;
			}
		}
	}
	return 0;
}