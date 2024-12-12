#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n = 0;
	int m = 0;
	cin >> n >> m;

	unordered_map<string, string> cards;

	for (int i = 0; i < n; i++)
	{
		string adress, key;

		cin >> adress >> key;

		cards[adress] = key;
	}

	for (int j = 0; j < m; j++)
	{
		string want;
		cin >> want;
		cout << cards[want] << endl;
	}


	return 0;
}
