#include <stdio.h>
#include <string.h>

char l[1000001];
int L[130];

int main(void)
{
	int i;
	scanf("%s",l);
	for(i=0;i<strlen(l);i++)
	{
		if((int)l[i] >95)
		{
			L[(int)l[i]-32]++;
		}
		else
		{
			L[(int)l[i]]++;
		}
	}
	
	int mx=0,j=0,a;
	for(i=65;i<91;i++)
	{
		if(L[i]>mx)
		{
			mx = L[i];
			a = i;	
		} 
	}
	
	for(i=65;i<91;i++)
	{
		if(mx==L[i])
		{
			j++;
		}
	}
	
	if(j>1)
	{
		printf("?");
	}
	else
	{
		printf("%c",a);
	}
	return 0;
}
