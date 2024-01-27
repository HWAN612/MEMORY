#include <iostream>

using namespace std;


int main()
{
	int X, N, a, b, result = 0;

	cin >> X >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		result += a * b;
	}

	if (X == result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}