#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	string word;
	cin >> word;
	bool sameCheck = false;

	vector<int> frequency(26, 0);

	for (char ch : word)
	{
		if (isalpha(ch)) {
			ch = tolower(ch);
			frequency[ch - 'a']++;
		}
	}

	char mostFrequent = 'a';
	int maxCount = 0;

	for (int i = 0; i < 26; i++)
	{
		if (maxCount == frequency[i])
		{
			sameCheck = true;
		}
		else if (frequency[i] > maxCount)
		{
			maxCount = frequency[i];
			mostFrequent = 'a' + i;
			sameCheck = false;
		}
		
	}

	if (sameCheck == true)
	{
		cout << '?';
	}
	else 
	{
		mostFrequent = toupper(mostFrequent);
		cout << mostFrequent;
	}

	return 0;
}
