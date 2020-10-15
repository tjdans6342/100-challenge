#include <bits/stdc++.h>

using namespace std;

int q[100001];
int n;


int f(int tt)
{
	int a,b,c;
	a=0;
	b=n-1;
	while(a<=b)
	{
		c=(a+b)/2;
		if(q[c]<tt)
		{
			a=c+1;
		}
		else if(q[c]>tt)
		{
			b=c-1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}



int main()
{
	scanf("%d" ,&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &q[i]);
	}	

	sort(q,q+n);

	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		int a;
		scanf("%d",&a);
		printf("%d\n",f(a));
	}

	return 0;
}