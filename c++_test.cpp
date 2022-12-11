#include<bits/stdc++.h>
#include<sysinfoapi.h>
#define ll long long
using namespace std;
int main(int argc,char **argv)
{
    printf("C++\n");
    FILETIME start,end;
    ll during;
    int q=100000000;ll i=0;
    GetSystemTimeAsFileTime(&start);
    while (q--)
    {
        i+=q;
    }
    GetSystemTimeAsFileTime(&end);
    during=100*(end.dwLowDateTime-start.dwLowDateTime);
    printf("Result: %lld\n",i);
    printf("Time: %lf seconds.\n",during/1000.0/1000000.0);
    return 0;
}

