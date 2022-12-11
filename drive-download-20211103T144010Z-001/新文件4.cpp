#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	int a , b;
	cin >> a ;
	for (int i = 1; i <= a ; i++)
	{
		cin >> b ;
		if(b[i]-i==0)
		{
			cout << b[i];
		}
		cout << b[i] << endl;
	} 
	return 0;
}
