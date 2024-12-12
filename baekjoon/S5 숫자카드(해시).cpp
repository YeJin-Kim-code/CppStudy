#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n = 0;
	int m = 0;

	cin >> n;
	unordered_set<int> cards;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		cards.insert(num);
	}
	cin >> m;

	for (int j = 0; j < m; j++)
	{
		int query;
		cin >> query;
		if (cards.find(query) != cards.end()) {
			cout << "1" << ' ';
		}
		else {
			cout << "0" << ' ';
		}
	}
	return 0;
}
