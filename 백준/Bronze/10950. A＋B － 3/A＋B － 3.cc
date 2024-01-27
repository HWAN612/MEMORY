#include <iostream>

using namespace std;


int main()
{
	int num;

	cin >> num;
	int* a = new int[num];
	int* b = new int[num];


	for (int i = 0; i < num; i++)
	{
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < num; i++)
	{
		cout << a[i] + b[i] << endl;
	}

}