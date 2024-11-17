#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int calSum(const vector<int>& A, const vector<int>& B)
{
	int maxSum = 0;
	int N = A.size();
	int M = B.size();

	if (N <= M) {
		for (int i = 0; i <= M - N; i++)
		{
			int currentSum = 0;
			for (int j = 0; j < N; j++)
			{
				currentSum += A[j] * B[i + j];
			}
			maxSum = max(maxSum, currentSum);
		}
	}
	else {
		for (int i = 0; i <= N - M; i++)
		{
			int currentSum = 0;
			for (int j = 0; j < M; j++)
			{
				currentSum += B[j] * A[i + j];
			}
			maxSum = max(maxSum, currentSum);
		}
	}
        return maxSum;
}

int main()
{
	int test = 0;

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		int N = 0;
		int M = 0;

		cin >> N >> M;
		vector <int> A(N);
		vector <int> B(M);
		for (int j = 0; j < N; j++)
		{
			cin >> A[j];
		}
		for (int k = 0; k < M; k++)
		{
			cin >> B[k];
		}

		int result = calSum(A, B);
		cout << "#" << i+1 << " " << result << endl;


	}

	return 0;

}
