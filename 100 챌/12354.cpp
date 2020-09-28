#include <bits/stdc++.h>

using namespace std;

int q[51];

int main()
{
	int t;
	scanf("%d", &t);

	for(int i=0;i<t;i++)
	{
		int n,cnt=0;
		scanf(" %d",&n);
		for(int j=0;j<n;j++)
		{
			scanf(" %d",&q[j]);
			if(j==0) continue;
			if(q[j-1]>=q[j]) cnt++;
		}
		printf("Case #%d: %d\n",i+1,cnt);
	}	
		

	return 0;
}