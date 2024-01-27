#include <iostream>

using namespace std;


int main()
{
	int num1, num2 = 0;

	cin >> num1;

	for (int i = 1; i <= num1; i++)
	{
		num2 += i;
	}

	cout << num2;
}