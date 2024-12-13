#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n = 0;
	cin >> n;
	int result = 0;
	int point = 0;
	vector<int> points(n);

	for (int i = 0; i < n; i++)
	{
		cin >> points[i];
	}

	sort(points.begin(), points.end());

	for (int j = 0; j < n; j++)
	{

		result += (point + points[j]);
		point += points[j];
	}

		cout << result << "\n";
		//1 3 6 9 13
		//1 2 3 3 4

	return 0;
}
