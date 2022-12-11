#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,n;
	cin >> n;	
	for(int i = 1;i <= n; i++)
	{
		cin >> a >> b >> c;
		b = b - a;
		c = c - a;
		if(b<0 or c<0)
		{
			if(b<0 and c<0)
				cout << "0" << " " << abs(b)+1 << " " << abs(c)+1 << endl;
			else if(b<0 and c>0)
				cout << c+1 << " " << (c+a)-(b+a)+1 << " " << "0" << endl;
			else if(b<0 and c==0)
				cout << "1" << " " << abs(b)+1 << " " << "1" << endl;
			else if(b>0 and c<0)
				cout << b+1 << " " << "0" << " " << (b+a)-(c+a)+1 << endl;
			else if(b==0 and c<0)
				cout << "1" << " " << "1" << " " << abs(c)+1 << endl;
		}
		else if(b>0 or c>0)
		{
			if(b>c)
				cout << b+1 << " " << "0" << " " << (b+a)-(c+a)+1 << endl;
			else if(c>b)
				cout << c+1 << " " << (c+a)-(b+a)+1 << " " << "0" << endl;
			else
				cout << c+1 << " " << "1" << " " << "1" << endl;
		}
		else if(b==0 or c==0)
		{
			if(b==0 and c!=0)
				cout << "0" << " " << "0" << " " << c << endl;
			else if(c==0 and b!=0)
				cout << "0" << " " << b << " " << "0" << endl;
			else
				cout << "1" << " " << "1" << " " << "1" << endl;
		}
	}
}
