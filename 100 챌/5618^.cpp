#include <bits/stdc++.h>

using namespace std;

int q[3],n;
int mx,mn,sum;

int f()
{
	int r;
	r = mx;
	mx = mn;
	mn = r%mn;
	if(mn == 0) return mx;
	return f();
}



int main()
{
	scanf("%d",&n);
	if(n==2)
	{
		scanf(" %d %d", &q[0],&q[1]);
		if(q[0]>q[1]) mx=q[0],mn=q[1];
		else mx=q[1],mn=q[0];
		sum = f();
		// printf("%d",sum);
	}	
	else
	{
		scanf(" %d %d %d", &q[0],&q[1],&q[2]);
		if(q[0]>q[1]) mx=q[0],mn=q[1];
		else mx=q[1],mn=q[0];
		sum = f();
		if(sum>q[2]) mx=sum,mn=q[2];
		else mx=q[2],mn=sum;
		sum = f();
		// printf("%d",sum);
	}	

	for(int i=1;i<=sum;i++)
	{
		if(sum%i==0) printf("%d\n",i);
	}	
		

	return 0;
}