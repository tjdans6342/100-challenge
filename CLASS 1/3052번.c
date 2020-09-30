#include <stdio.h>

int main(void)
{
	int sum=0,i,L[44] = {0},l;
	
	for(i=0;i<10;i++)
	{
		scanf("%d", &l);
		L[l%42] = 1;
	}
	
	for(i=0;i<42;i++)
	{
		if(L[i]==1)
		{
			sum ++;
		}
	}
	printf("%d",sum);
	
	return 0;
}
