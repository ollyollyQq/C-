#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str_in, str_out;
    while(getline(cin,str_in))
    {
    	str_out = " ";
    	for(int i = 0; i < str_in.length() ; ++i )
    	{
    		str_out += (char)(str_in[i] - 7);
		}
    	cout << str_out << endl; 	
	}
	return 0;
}

