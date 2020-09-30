#include <stdio.h>

int main(void)
{
	int i,a,b,a1,b1,mx;
	scanf("%d %d", &a,&b);
	if(a%10 > b%10)
	{
		mx = a;
		
	}
	else if(a%10 == b%10)
	{
		a1=a/10;
		b1=b/10;
		if (a1%10>b1%10)
		{
			mx = a;
		}
		else if(a1%10 == b1%10)
		{
			if(a1/10>b1/10)
			{
				mx = a;
			}
			else
			{
				mx = b;
			}
		}
		else
		{
			mx = b;
		}
	}
	else
	{
		mx = b;
	}
	
	
	for(i=0;i<3;i++)
	{
		printf("%d", mx%10);
		mx /= 10;
	}
	
	return 0;
}
