#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0, d = 0, e = 0;
int mainNum = 0; 
int point = 0;
int cal(int num, int point)
{
	if (mainNum % num == 0)
	{
		mainNum = mainNum / num;
		point++;
		cal(num, point);
	}
	else
	{
		return point;
	}
}

int main()
{
   	ios_base::sync_with_stdio(false); //고속입력 엄청난 시간이득
	cin.tie(nullptr);
	//2다하면 3 5 7 11 순으로
	int t = 0;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> mainNum;

		a = cal(2, 0);
		b = cal(3, 0);
		c = cal(5, 0);
		d = cal(7, 0);
		e = cal(11, 0);

		cout << '#' << i+1 << ' ';
		cout << a << ' ';
		cout << b << ' ';
		cout << c << ' ';
		cout << d << ' ';
		cout << e <<'\n';
	}

	
}
