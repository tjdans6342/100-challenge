#include <bits/stdc++.h>

using namespace std;

int q[101];

int main()
{
	int t,n;
	scanf("%d", &t);

	for(int i=0;i<t;i++)
	{
		scanf(" %d",&n);
		int sum=0;
		int a;
		for(int j=0;j<n;j++)
		{
			scanf(" %d",&a);
			sum += a;
		}	
		if(sum>0) printf("Right\n");
		else if(sum<0) printf("Left\n");
		else printf("Equilibrium\n");
	}	

	return 0;
}