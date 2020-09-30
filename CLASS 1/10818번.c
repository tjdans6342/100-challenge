#include <stdio.h>
#include <limits.h>

int main(void)
{
	int l,i,n,mx=INT_MIN,mn=INT_MAX;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &l);
		if(mx<l)
		{
			mx = l;
		}
		if(mn>l)
		{
			mn = l;
		}
	}
	printf("%d %d",mn,mx);
	return 0;
}
