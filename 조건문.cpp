#include<iostream>

using namespace std;

int main()
{
	int a;

	cin >> a;

	if (a > 10)
	{
		cout << "10보다 큽니다" << endl;
	}

	else if (a == 10)
	{
		cout << "10보다 같습니다" << endl;
	}
	else
	{
		cout << "10보다 작습니다" << endl;
	}
}