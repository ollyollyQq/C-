#include<iostream>
#include<algorithm>
using namespace std;

bool sort_dec(double a, double b)
{
	return a > b;
}

int main(){
	int N = 30;
	double num[100];
	sort(num, num + N , sort_dec);

return 0;
}

