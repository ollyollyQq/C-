#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,sum,sum2=0,a[10][10],b[10][10],c[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)                  
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
				sum += a[i][k]*b[i];
			c[i]=sum;
		}
	}
	for(i=0;i<n;i++)
		sum2 += c[i][i];
	printf("%d",sum2);
	return 0;
 } 
