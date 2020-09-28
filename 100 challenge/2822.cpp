//정렬을 하면 풀수 있겠다 + 같은수 생각 (어렵네)
#include <bits/stdc++.h>

using namespace std;



int main()
{
	int sum=0,a=-1,dp[10],l[10],r[10];
	for (int i = 0; i < 8; ++i)
	{
		scanf("%d", &dp[i]);
		l[i] = dp[i];
	}

	int mx = 0;
	for(int i=7; i>0;i--)
	{
		for (int j = 0; j <i ; j++)
		{
			if(l[j]>l[j+1])
			{
				mx = l[j];
				l[j] = l[j+1];
				l[j+1] = mx; 
			}
		}
	}
	
	for (int i = 3; i < 8; ++i)
	{
		sum += l[i];
	}

	for (int i=0 ; i<8; i++)
	{
		for(int j = 3; j<8 ; j++)
		{
			dp[i]==l[j] ? a++,r[a]=i+1 : true;
		}
	}
	int b=0,c=0;
	printf("%d\n",sum);
	for (int i = 0; r[i] != 0; ++i)
	{
		if(b != r[i] && c<5)
		{
			printf("%d ", r[i]);
			b=r[i];
			c++;
		}
		
	}
	
		

	return 0;
}