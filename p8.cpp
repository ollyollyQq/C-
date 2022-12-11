#include <stdio.h>
#include<stdlib.h> 
int main()
{
    int n,x,sum = 0;
    int k;
    scanf("%d %d",&n,&x);
    int a[n][x];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < x ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0 ; i < x ; i++)
    {
        scanf("%d",&k);
        for(int j = 0 ; j < n ; j++)
        {
            a[j][i] = a[j][i] * k;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        sum = 0;
        for(int j = 0 ; j < x ; j++)
        {
            sum = sum + a[i][j];
        }
       printf("%d\n",sum);
    }   
}




