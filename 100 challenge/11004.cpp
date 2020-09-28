#include <bits/stdc++.h>

using namespace std;

int q[5000001];

int main()
{
	int n;
	scanf("%d",&n);
	int m;
	scanf("%d",&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&q[i]);
	}

	sort(q,q+n);

	printf("%d", q[m-1]);
		

	return 0;
}