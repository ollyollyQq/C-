#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[9999];
    int i;
    while(gets(str)!=NULL)
    {
        for(i=0;i<strlen(str);i++)
            printf("%c",str[i]-7);
        printf("\n");
    }
    return 0;
}
	

