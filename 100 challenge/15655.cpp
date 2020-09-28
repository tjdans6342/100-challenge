//15654번 살짝 변형 하면 됨.

#include <bits/stdc++.h>

using namespace std;

int l[10],r=1;
int dp[10];
int a[10001];

int n,m;
int M[9]; //순열 저장하는 곳
int check[10001]; //숫자카드

void Al() //정렬
{
	for(int i=0;i<n; i++)
	{
		a[dp[i]]++;
	}

	for(int i=1; i<=10000; i++)
	{
		if(a[i] == 1)
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
		{
			printf("%d ",M[i]);
		}
		printf("\n");
		return;
	}

	for(int i=1;i<=n;i++)
	{
		if(check[l[i]] == false && M[pos-1]<l[i])
		{
			M[pos]=l[i];
			check[l[i]] = true;  // 쓰고
			f(pos+1);
			check[l[i]] = false;  // 반납
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