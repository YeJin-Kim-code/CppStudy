#include <iostream>

using namespace std;
int test = 0;
int num = 0;
int result = 0;
int main()
{
	
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		result = 0;
		num = 0;
		cin >> num;
		for (int j = 1; j <= num; j++)
		{
			if (j % 2 == 0)
			{
				result = result - j;
			}
			else
			{
				result = result + j;
			}
		}
		cout << '#' << i+1 << ' ' << result;
	}



}
