#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int start,end;
        if (a<b){
            start=a;
            end=b;
        }
        else{
            start=b;
            end=a;
        }
        int max=0;
        for (int i=start;i<=end;i++)
        {
            int k(i),lenth(1);
            while (k!=1)
            {
                if(k%2==0){k=k/2;}
                else{k=3*k+1;}
                lenth++;
            }
            if (lenth>max){max=lenth;}
        }
        cout<<a<<" "<<b<<" "<<max<<endl;
    }
}
