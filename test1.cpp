#include<iostream>
using namespace std;
int fun(int a){
	if(a==0)
		return 1;
	else
		return a*fun(a-1);
}
int main(){
	int a ;
	while(cin >> a){
		cout << fun(a) << endl; 		
	}
	return 0;
}
