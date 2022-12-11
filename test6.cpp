#include<iostream>
using namespace std;
int main(void){
	int b=2;
	int *pointer;
	pointer = &b;
	cout << pointer <<"\n"<<*pointer << endl;
return 0;
}
