//중요!! (재귀 알고리즘) - ★

#include <bits/stdc++.h>

using namespace std;

int hp=100,sum_list[1048577],r=0;
int n,N[22],M[22],sum=0;
int a=1,b=0,p[22];


void f(int pos)
{
	if(pos == a)
	{
		sum_list[b] = sum;
		b++;
		

		return;
	}


	for(int i=1; i<=n; i++)
	{
		p[pos] = i;
 		if(hp-N[i] >0 && p[pos-1] < p[pos] )
		{
			hp-=N[i];
			sum += M[i];
			f(pos+1);
			sum-= M[i];
			hp+=N[i];
		}
	}
}


int main()
{
	scanf("%d", &n);


	for(int i=1; i<=n; i++)
	{
		scanf(" %d",&N[i]);
	}

	for(int i=1; i<=n; i++)
	{
		scanf(" %d",&M[i]);
	}

	for(int i=1; i<=n; i++)
	{
		f(0);
		a++;
		for(int j=0; p[j] !=0; j++)
		{
			p[j] =0;
		}
	}

	int mx=0;
	for(int i=0; i<1048577; i++)
	{
		if(mx<sum_list[i])
		{
			mx = sum_list[i];
		}
	}

	printf("%d\n",mx);
	

	return 0;
	
}