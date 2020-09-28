#include <bits/stdc++.h>

using namespace std;

int dp[4];

void al()
{
	int a;
	for (int i=1;i<3;i++)
	{
		if(dp[i]<dp[i-1])
		{
			a=dp[i];
			dp[i] = dp[i-1];
			dp[i-1] = a;
		}
	}
}



int main()
{
	for(int j=0;true;j++)
	{
		for(int i=0; i<3;i++)
		{
			scanf("%d", &dp[i]);
		}
		if(dp[0] == 0 && dp[1] == 0 && dp[2] == 0) break;
		al();
		//if (dp[0]==0 && dp[1]==1 && dp[2]==1) printf("wrong\n");
		if((dp[2]*dp[2]) == (dp[1]*dp[1]) + (dp[0]*dp[0])) printf("right\n");
		else printf("wrong\n");
	}

	

	return 0;
}