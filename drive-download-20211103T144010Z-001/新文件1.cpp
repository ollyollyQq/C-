#include<iostream>
#include<algorithm> 
using namespace std;

bool sort_dec(double a , double b)
{
	return a > b;
}
int main()
{
	int arr[] = {4,5,8,3,7,1,2,6,10,9};
	double num[100];
	sort(arr,arr+10,sort_dec);
	for (int i = 0; i < 10 ; i ++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}


