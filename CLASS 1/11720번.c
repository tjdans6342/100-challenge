#include <stdio.h>

char le[100];
int main(void)
{
	int i,n,l,sum=0;
	scanf("%d %s", &n,&le);
	for(i=0;i<n;i++)
	{
		sum += ((int)le[i])-48;
	}
	printf("%d",sum);
	return 0;
}
