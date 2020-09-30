#include <stdio.h>

int main(void)
{
	
	int i,j,N;
	scanf("%d", &N);
	
	for(i=1; i<N+1; i++)
	{
		for(j=0; j<N-i; j++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		if(i != N)
		{
			printf("\n");	
		}
	}
	return 0;
}
