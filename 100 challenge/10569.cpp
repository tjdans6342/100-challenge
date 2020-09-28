#include <bits/stdc++.h>

using namespace std;

int a[101][2];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &a[i][0],&a[i][1]);
	}

	for(int i=0; i<n; i++)
	{
		printf("%d\n",2-a[i][0]+a[i][1]);
	}

	return 0;
}