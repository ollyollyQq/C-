#include<iostream>
using namespace std;
void print(int n){
	return;
	cout<< " " << n;
	print(n-1);
}

