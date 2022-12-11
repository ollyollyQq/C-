#include<iostream>
using namespace std;
int main()
{
    int h[60];
    int n, sum, avg, ans, i;
    cin >> n;
    sum = 0;
    for( i=0 ; i<n ; i=i+1 )
    {
        cin >> h[i];
        sum = sum+h[i];
    }
    avg = sum/n;
    ans = 0;
    for( i=0 ; i<n ; i=i+1 )
    {
        if( avg > h[i] )
            ans = ans + avg-h[i];
        if( avg < h[i] )
            ans = ans + h[i]-avg;
    }
    ans = ans/2;
    cout << "The minimum number of moves is " << ans << "." << endl;
    cout << endl;
    return 0;
}

