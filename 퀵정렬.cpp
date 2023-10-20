#include <iostream>

using namespace std;

void swap(int arr[], int one, int two)
{
	int empty;
	empty = arr[one];
	arr[one] = arr[two];
	arr[two] = empty;
}
void Partition(int arr[], int left, int right)
{
	if (left >= right) return;

	int pivot = left;
	//swap(arr, 0, pivot);
	int a = left+1;
	int b = right;
	while (a <= b)
	{
		while (arr[a] <= arr[left])
		{
			a = a + 1;
		}

		while (arr[b] >= arr[left]  && b > left)
		{
			b = b - 1;
		}

		if (a > b)
		{
			swap(arr, b, pivot);
		}
		else
		{
			swap(arr, a, b);
		}
		Partition(arr, left, b - 1);
		Partition(arr, b + 1, right);
	}

}

int main()
{
	int arr[100];

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	Partition(arr, 0, 7);
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i];
	}
}