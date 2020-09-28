//재귀함수는 너무 어렵다

#include <bits/stdc++.h>

using namespace std;

int l[10],r=1,dp[10],a[11],n=0,sum=0;
int check[11];
int z,x,y=0;

void Al() //정렬
{
	for(int i=0;i<n; i++)
	{
		a[dp[i]]++;
	}

	for(int i=0; i<=9; i++)
	{
		if(a[i] >= 1)
		{
			l[r] = i;
			r++;
			for(int j=0; j<a[i];j++)
			{
				check[i]++;
			}
			
		}
	}

	return;
}


void f(int pos)
{
	if(pos==n)
	{
		if(z<sum)
		{
			printf("%d\n",sum);
			y++;
			return;
		}
	}


	for(int i=1;i<=n;i++)
	{
		if(check[l[i]]>=1 && y==0)
		{
			check[l[i]]--;
			sum += l[i]*((int)pow(10,(n-pos-1)));
			f(pos+1);
			sum -= l[i]*((int)pow(10,(n-pos-1)));
			check[l[i]]++;
		}
	}
}



int main()
{
	scanf("%d", &z);
	x=z;
	for(int i=0; x>0; i++)
	{
		dp[i] = x%10;
		x /= 10;
		//intf("%d\n",dp[i]);
		n++;
	}
 
	Al();
	f(0);

	if(y == 0)
	{
		printf("0");
	}

	// for(int i=1;i<=n;i++)
	// {
	// 	printf("%d\n",l[i]);
	// }



	return 0;
}