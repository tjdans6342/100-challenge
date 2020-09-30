#include <stdio.h>

int main(void)
{
	int i,x[9],a,max=0;
	for(i=0; i<9; i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0; i<9; i++)
	{
		if(max < x[i])
		{
			max = x[i];
			a = i+1;
		}
	}
	printf("%d\n",max);
	printf("%d",a);
	return 0;
}
