#include <bits/stdc++.h>

using namespace std;

int q[11];
int check[10];
char dp[12];

int main()
{
	scanf("%s", dp);

	int n=0;
	for(int i=0; dp[i]!=0 ; i++)
	{
		q[i] = dp[i]-48;
		n++;
	}

	for(int i=0; i<n ; i++)
	{
		check[q[i]]++;
	}

	for(int i=9;i>=0;i--)
	{
		while(check[i]>=1)
		{
			printf("%d",i);
			check[i]--;
		}
	}

	return 0;
}