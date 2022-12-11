#include<stdio.h>
#include<string.h>
int main(){
	char s[999],t[999];
	int i,j,a,b;
	while(scanf("%s%s",s,t)!=EOF)
	{
		i=0;
		j=0;
		a = strlen(s);
		b = strlen(t);
		for(i=0,j=0;i<a&&j<b;)
		{
			if(s[i]==t[j])
			{
				i++;
				j++;
			}
			else
			{
				j++;
			}	
		}
		if(i==a)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
	}
return 0;
}
