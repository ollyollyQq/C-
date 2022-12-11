#include<iostream>
using namespace std;
int function(int a){
	if(a==0)
	return 1;
	else{
		int i , S=1;
		for(i=1;i<=a;i++){
			S = S * i; 
		} 
		return S;
	}
}
int main(){
	int a ;
	while(cin>>a){
		cout << function(a) << endl;	
	}
return 0;
}

