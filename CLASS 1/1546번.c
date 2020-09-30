#include <stdio.h>

int N[1001];

int main(void)
{
	int n,i,mx = 0;
	scanf("%d", &n);
	
	for(i = 0; i<n; i++)
	{
		scanf(" %d", &N[i]);
		if(mx < N[i])
		{
			mx = N[i];
		}
	}
		
	float sum = 0;
	float a = 0;
	for(i = 0; i<n ; i++)
	{
		a = N[i];
		a = a*100/mx;
		sum += a;
	}
	float average = sum/n;
	printf("%f \n", average);	
	
	return 0;
}
