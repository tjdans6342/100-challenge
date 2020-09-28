#include <bits/stdc++.h>

int dp[16],l[16],k,r=1,a[55],M[8];
int check[55];


void Al() //정렬
{
	for(int i=0;i<k;i++)
	{
		a[dp[i]]++; //dp[0~k-1]
	}

	for(int i=0;i<=50;i++)
	{
		if(a[i] == 1)
		{
			l[r] = i; // l[1~r]
			r++;
			check[i]++;
		}

	}
	return;
}


void f(int pos)
{
	if(pos == 6)
	{
		for(int i=0; i<6; i++)
		{
			printf("%d ", M[i]);
		}
		printf("\n");
		return;
	}

	for(int i=1;i<=k;i++)
	{
		if(check[l[i]] == 1 && M[pos-1]<l[i])
		{
			check[i]=0;
			M[pos] = l[i];
			f(pos+1);
			check[i]=1;
		}
	}
}



using namespace std;

int main()
{
	while(true)
	{
		scanf("%d",&k);
		if(k==0)
		{
			break;
		}
		for (int i=0;i<k;i++)
			{
				scanf(" %d",&dp[i]);
			}
		Al();
		//for (int i=1; i<=k; i++)printf("%d\n",l[i]);
		f(0);
		for(int i=0;i<55;i++)
		{
			a[i]=0;
			check[i]=0;
		}
		r=1;
		for(int i=0;i<16;i++)
		{
			dp[i]=0;
			l[i]=0;
		}
		printf("\n");
	}

	return 0;
}