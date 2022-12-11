#include <iostream>
#include <cmath>
using namespace std;

int fn(int a, int b, int c)
{	
	return max(max(b - a + 1, c - a + 1), 0);
}

int main()
{
	int t;
	cin >> t;
	while(t > 0)
	{
		int a, b, c;
		
		cin >> a >> b >> c;
		cout << fn(a, b, c) << " " << fn(b, a, c) << " " << fn(c, a, b) << endl;
		
		--t;
	}
	
	return 0;
}
