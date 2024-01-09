#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N>> M;
	int a[100001] = {};
	int ex;
	for (int i = 1; i <= N; i++)
	{
		cin >> ex;
		a[i] = a[i - 1] + ex;
	}
	for (int j = 0; j < M; j++)
	{
		int start, end;
		cin >> start >> end;
		cout << a[end] - a[start - 1] << "\n";
	}
}
