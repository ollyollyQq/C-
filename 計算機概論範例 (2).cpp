#include<iostream>
#include <iomanip> 

using namespace std;
int main()
{
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
	
	float a = (1.4);
	double b = (1.4);
	
	cout << fixed << setprecision(20) << a <<endl;	
    cout << fixed << setprecision(20) << b <<endl;
	return 0;
}

