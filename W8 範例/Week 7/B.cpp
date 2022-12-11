#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fn(string str, string target)
{
	int ret = 0;
	int x = target.length() - 1;
	for(int i = str.length() - 1; i >= 0 && x >= 0; --i)
	{
		if(str[i] == target[x])
		{
			--x;
		}
		else
		{
			++ret;
		}
	}
	
	return ret;
}

int main()
{
	int t;
	cin >> t;
	while(t > 0)
	{
		string str;
		cin >> str;
		
		cout << min(fn(str, "25"), min(fn(str, "50"), min(fn(str, "75"), (str.length() > 2 ? fn(str, "00") : 20)))) << endl;
		 
		--t;
	}

	return 0;
}

