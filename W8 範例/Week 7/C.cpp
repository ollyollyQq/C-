#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t > 0)
	{
		int n, k;
		cin >> n >> k;
		
		int m[400007];
		for(int i = 0; i < k; ++i)
		{
			cin >> m[i];
			m[i] = n - m[i];
		}
		
		sort(m, m + k);
		
		int ans = 0, sum = 0;
		while(sum < n && ans < k)
		{
			sum += m[ans];
			++ans;
		}
		
		if(sum >= n)
		{
			--ans;
		}
		
		cout << ans << endl;
		
		--t;
	}

	return 0;
}

