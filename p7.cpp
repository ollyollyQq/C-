#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,k,i;
    for(i=1;;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            k=a,a=b,b=k;
             printf("%d %d\n",a,b);
        }
        else if(a==0&&b==0)
        {
            break;
        }
        else
        {
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}
