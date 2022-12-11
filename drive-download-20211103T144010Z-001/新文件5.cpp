#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k,i,j;

    //SET IN C++ CAN SORT AND CAN REMOVE DUPLICATE ELEMENTS
    set< long long int > s;

    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> j;

        //IF ELEMENT IS NOT ZERO INSERT INTO SET
        if(j != 0)
            s.insert(j);
    }    

    //PRINTING THE NO.OF DISTINCT NON-ZERO INTEGERS
    cout << s.size() << endl;
    return 0;
}
