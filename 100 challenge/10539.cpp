#include <bits/stdc++.h>

using namespace std;

int q;

int main()
{
	int n,a,b;
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		scanf(" %d",&b);
		printf("%d ", b*i - a*(i-1));
		a=b;
	}	
		

	return 0;
}