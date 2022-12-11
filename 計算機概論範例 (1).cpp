#include<iostream>
using namespace std;
int main()
{
	
}
int test(int a)
	{
		if(a==0)
		return 1;
		else return a+test(a-1);
	}
