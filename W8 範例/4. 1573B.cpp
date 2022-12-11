#include <iostream>
#include <algorithm>
using namespace std;

struct Num
{
	int value;
	int pos;
};

bool comp(Num a, Num b)
{
	return (a.value < b.value);
}

int main()
{
	int t;
	cin >> t;
	
	int n;
	Num a[100007], b[100007];
	while(t > 0)
	{
		cin >> n;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i].value;
			a[i].pos = i;
		}
		for(int i = 0; i < n; ++i)
		{
			cin >> b[i].value;
			b[i].pos = i;
		}
		
		sort(a, a + n, comp);
		sort(b, b + n, comp);
		
		for(int i = n - 2; i >= 0; --i)
		{
			b[i].pos = (b[i].pos < b[i + 1].pos ? b[i].pos : b[i + 1].pos);
		}
		
		int ans = 2e9;
		for(int i = 0; i < n; ++i)
		{
			if(a[i].pos + b[i].pos < ans)
			{
				ans = a[i].pos + b[i].pos;
			}
		}
		
		cout << ans << endl; 
		
		--t;
	}

    return 0;
}

