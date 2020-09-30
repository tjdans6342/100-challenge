#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,i,j,sm=1,sum = 0;
	char L[85];
	scanf("%d",&n);
	int l[100]={0};
	
	for(i=0;i<n;i++)
	{
		scanf(" %s",L);
		for(j=0;j<strlen(L);j++)
		{
			if(L[j] == 'O')
			{
				sum += sm;
				sm ++;
			}
			else if(L[j] == 'X')
			{
				sm=1;
			}
		}
		l[i] = sum;
		sum = 0;
		sm = 1;

	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",l[i]);
	}
	return 0;
}
