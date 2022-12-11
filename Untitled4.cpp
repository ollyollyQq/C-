#include<iostream>
using namespace std;
int main(){
	int a , b , c ;
	int i,z,j;
	cin >> z;
	cin >> a >> b >> c;
	for(i=1;i<=z;i++)
	{	
		for(j=0;j<=3;j++)
		{
			if(a>=b)
			{
				a = a - a;
				b = a - b + 1 ;
			}
			if(b>=c) 
			{
				b = b - b;
				c = b - c + 1;
			}
			if(c>=a)
			{
				c = c - c;
				a = c - a + 1;
			} 
			if(a>=b && b>=c)
			{
				a = a - a;
				b = a - b + 1;
				c = a - c + 1;
			}
		}
	}
		cout << a << b << c;
return 0;
}
