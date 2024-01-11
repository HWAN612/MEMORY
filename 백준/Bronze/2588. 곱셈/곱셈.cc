#include <iostream>

using namespace std;


int main()
{
	int A, B, result;

	cin >> A >> B;
	result = A * B;

	cout << A * (B % 10) << endl;
	B /= 10;
	cout << A * (B % 10) << endl;
	B /= 10;
	cout << A * (B % 10) << endl;
	cout << result << endl;
}