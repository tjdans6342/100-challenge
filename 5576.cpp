#include <bits/stdc++.h>

using namespace std;


int dp[11],l[11],check[101];
int r=0;

void al()
{
	for(int i=0;i<10;i++)
	{
		check[dp[i]]++;
	}	
	for(int i=0;i<101;i++)
	{
		if(check[i] >= 1) 
		{
			for(int j=0; j<check[i]; j++)
			{
				l[r] = i;
				r++;
			}
		}
	}
	r=0;
}

int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d", &dp[i]);
	}	

	al();
	printf("%d ", l[7]+l[8]+l[9]);

	for(int i=0; i<101;i++)
		check[i]=0;

	for(int i=0;i<10;i++)
	{
		scanf("%d", &dp[i]);
	}	

	al();
	printf("%d", l[7]+l[8]+l[9]);


	return 0;
}