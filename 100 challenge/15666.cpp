//좀 어렵누

#include <bits/stdc++.h>

using namespace std;

int l[10],r=1,dp[10],a[10001],n,m,M[9];

void Al()
{
	for(int i=0;i<n; i++)
		a[dp[i]]++;
	
	for(int i=1; i<=10000; i++)
	{
		if(a[i] >= 1)
		{
			l[r] = i;
			r++;
		}
	}

	return;
}



void f(int pos)
{
	if (pos==m)
	{
		for(int i=0;i<m;i++)
			printf("%d ",M[i]);
		
		printf("\n");
		return;
	}

	for(int i=1;i<=r-1;i++)
	{
		if(M[pos-1]<=l[i])
		{
			M[pos]=l[i];
			f(pos+1);
		}
	}
}

int main()
{
	scanf("%d %d", &n,&m);

	for(int i=0;i<n;i++)
	{
		scanf(" %d", &dp[i]);
	}
	Al();
	f(0);	

	return 0;
}