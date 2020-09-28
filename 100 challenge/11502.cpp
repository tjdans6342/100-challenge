//소수를 판단하는 프로그램?
//재귀함수

#include <bits/stdc++.h>
int t,k,check[1001],M[4],a=0,s;


void Minority()
{
	for(int i=1; i<1001; i++)
	{
		for(int j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				check[i] = 1;
			}
		}
	}


	return;
}


void f(int pos)
{
	if(pos==3)
	{
		if(k==0)
		{
			for(int i=0; i<3; i++)
			{
				printf("%d ",M[i]);
				a = 1;
			}
		printf("\n");
		}
		return;
	}



	for(int i=1;i<=s;i++)
	{	
		if(a==1)
		{
			return;
		}
		if(check[i] == 0 && k>0)
		{
			k -= i;
			M[pos] = i;
			f(pos+1);
			k += i;
		}
	}
}


using namespace std;

int main()
{
	Minority();
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		scanf(" %d",&k);
		s=k;
		f(0);
		a=0;
	}
	return 0;
}