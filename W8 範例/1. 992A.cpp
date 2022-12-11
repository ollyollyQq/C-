#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N, A[100000];	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	sort(A, A + N);
	int ans = (A[0] == 0 ? 0 : 1), pre = A[0];
	for(int i = 1; i < N; ++i)
	{
		if(A[i] != pre && A[i] != 0)
		{
			++ans;
		}	
		pre = A[i];
	}
	cout << ans << endl;
    return 0;
}
