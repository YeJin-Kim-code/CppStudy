#include <iostream>

using namespace std;

int main()
{
	int test = 0;


	cin >> test;

	for (int i = 0; i < test; i++)
	{
		int N;
		cin >> N;

		bool check[10] = { false };
		int count_seen = 0;
		int multiplier = 0;
		int current_number;

		while (count_seen<10)
		{
			++multiplier;
			current_number = multiplier * N;

			int temp = current_number;
			while (temp > 0)
			{
				int digit = temp % 10;
				if (!check[digit])
				{
					check[digit] = true;
					++count_seen;
				}
				temp /= 10;
			}
		}
		cout << "#" << i+1 << " " << current_number << endl;
	}

	return 0;

}
