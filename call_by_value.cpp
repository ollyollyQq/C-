#include<iostream>
using namespace std;
fun(int x,int y){
	int temp=x;
	x=y;
	y=temp;
}
int main(){
	int a = 10,b = 20;
	fun(a,b);
	cout << a << b << endl;
	return 0;
}

