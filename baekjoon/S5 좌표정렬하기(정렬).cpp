#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;

struct Point {
	int x;
	int y;
};

bool compare(const Point& a, const Point& b)
{
	if (a.x == b.x) {
		return a.y < b.y;
	}
	return a.x < b.x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n = 0;
	cin >> n;

	vector<Point> points(n);

	for (int i = 0; i < n; i++)
	{
		cin >> points[i].x >> points[i].y;
	}

	sort(points.begin(), points.end(), compare);

	for (const auto& point : points) {
		cout << point.x << " " << point.y << "\n";
	}

	return 0;
}
