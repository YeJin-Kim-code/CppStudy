#include <iostream>
using namespace std;

int main()
{
	int test = 0;


	cin >> test;

	for (int i = 0; i < test; i++)
	{
		int A = 0;
		int B = 0;
		int result = 0;
		int P=0, Q=0, R=0, S=0, W=0;
		
        cin >> P >> Q >> R >> S >> W;
		A = W*P;
		B = W<=R? Q :Q + ((W-R)*S);
		result = A > B? B : A;
		

		cout << "#" << i+1 << " " << result << endl;
	}

	return 0;

}
