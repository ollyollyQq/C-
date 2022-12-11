#include<iostream>
using namespace std;
int Exp(int x,int y){
	if(y==0)
	return 1;
	else 
	return Exp(x,(y-1))*x;
}
int main(){
int x,y;
while(cin>>x>>y)
{
	cout << Exp(x,y) << endl;
}
return 0;
}

