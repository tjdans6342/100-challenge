#include <stdio.h>

int L[10001];

int main(void)
{
	int n,i,l,x;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf(" %d",&l);
		if(l<x)
		{
			printf("%d ",l);
		}
	}
	return 0;
}
