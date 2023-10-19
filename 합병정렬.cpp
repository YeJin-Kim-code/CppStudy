#include <iostream>

using namespace std;
int* arr2;


void merge(int arr[], int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end)
	{
		if (arr[i] > arr[j])
		{
			arr2[k++] = arr[j++];
		}
		else
		{
			arr2[k++] = arr[i++];
		}
	}
	int tmp = i > mid ? j : i;

	while (k <= end) arr2[k++] = arr[tmp++];

	//for (int a = 0; a < end; a++)
	//{
	//	cout << arr2[a] << endl;
		
	//}
	//cout << '\n';
}

void mergesort(int arr[], int start, int end)
{

	if (start < end)//trivial 체크
	{
		int k = (start + end) / 2;
		mergesort(arr, start, k);
		mergesort(arr, k + 1, end);
		merge(arr, start, k, end);
	}
}

int main()
{
	int array[100];
	arr2 = new int[100];
	for (int i = 0; i < 8; i++)//배열 입력
	{
		cin >> array[i];
	}
	mergesort(array, 0, 7);
	for (int i = 0; i < 8; i++) printf("%d\n", arr2[i]);
}