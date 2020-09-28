// 이상하게 풀어서 틀림
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int dp[1000];

// void al()
// {
// 	int a,cnt=0;

// 	for(int i=0;dp[i]!=0;i++)
// 	{
// 		cnt++;
// 	} 
// 	cnt--;
// 	while(cnt>1)
// 	{

// 		for (int i=1;i<cnt;i++)
// 		{
// 			if(dp[i]<dp[i-1])
// 			{
// 				a=dp[i];
// 				dp[i] = dp[i-1];
// 				dp[i-1] = a;
// 			}
// 		}
// 		cnt--;

// 	}
// }


int main()
{
	int p=0,q[7],n,a=0,sum=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &q[i]);
	}
	
	//printf("%d %d %d", n,q[0],q[1]);

	if(n==3)
	{
		for (int i = 1; true ; ++i)
		{
			if(q[0]%i == 0 && q[1]%i == 0 && q[2]%i ==0)
			{

				sum *= i;
				// dp[a] = i;
				// dp[a+1] = sum;
				q[0] /= i;
				q[1] /= i;
				q[2] /= i;
				a += 2;
				i=1;
				// p=i;
								
			}
			if(i>q[0] || i>q[1] || i>q[2])
			{
					break;
			}
		}
	}
	else
	{
		for (int i = 1; true ; ++i)
		{
			if(q[0]%i == 0 && q[1]%i == 0)
			{
				sum *= i;
				// dp[a] = i;
				// dp[a+1] = sum;
				q[0] /= i;
				q[1] /= i;
				// a += 2;
				i=1;
				// p=i;
				
			}
			if(i>q[0] || i>q[1])
			{
				break;
			}
		}
	}

	// int b=0;

	for(int i=1;i<=sum;i++)
	{
		if(sum%i==0) printf("%d\n",i);
	}
	// al();
	// for(int i=0;dp[i]!=0;i++)
	// {
	// 	if(b != dp[i])
	// 	{
	// 		printf("%d\n",dp[i]);
	// 		b = dp[i];
	// 	}
	// }

	return 0;
	
}