#include<iostream>
#include<algorithm> 
using namespace std;
struct P
{
	int x={1,2,5,6,8,9,3,4,7,10}; 
	double y=0.9;
	int z=58;
};
bool sort_dec(P a, P b)
{
	if(a.x == b.x)
	{
		if(a.y == b.y)
		{
			return a.z < b.z ;
		}
		return a.y < b.y;	
	}
	return a.x < b.x;
}
int main()
{
	P p[100];
	sort(p,p+50,sort_dec);
	for (int i = 0; i < 51 ; i ++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	return 0;
}
