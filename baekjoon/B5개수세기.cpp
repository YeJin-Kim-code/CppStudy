#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	int standNum = 0;
	int count = 0;
	vector <int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> standNum;

	for (int j=0; j < N; j++)
	{
		if (standNum == arr[j])
		{
			count++;
		}
	}

	cout << count;
}
