#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
	int T;
	cin >> T;

	char str[100];
	int arr[26];
	bool good = true;

	for (int testcase = 0; testcase < T; testcase++)
	{
		good = true;
		cin >> str;
		for (int i = 0; i < 26; i++)
			arr[i] = 0;
		for (int i = 0; i < strlen(str); i++)
		{
			arr[str[i] - 'a']++; //알파벳 -> 숫자
		}
		printf("#%d ", testcase + 1);
		for (int j = 0; j < 26; j++)
		{

			if (arr[j] % 2 != 0)
			{
				printf("%c", j + 'a');//숫자 -> 알파벳
				good = false;
			}

		}

		if (good)
		{
			cout << "Good";
		}
		cout << endl;
	}
}