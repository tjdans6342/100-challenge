#include <stdio.h>

int main(void)
{
	int sm=0,i,l;
	for(i=0;i<8;i++)
	{
		scanf("%d", &l);
		if(l==i+1)
		{
			sm += 1;
		}
		else if(l==8-i)
		{
			sm -= 1;
		}
	}
	if(sm == 8)
	{
		printf("ascending");
	}
	else if(sm == -8)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
	
	
	return 0;
}
