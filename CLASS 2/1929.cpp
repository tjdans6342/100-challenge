#include <bits/stdc++.h>

using namespace std;

int judge[1000001];

int main()
{
	judge[1]=1;

	for(int i=2;i<=1000;i++)
		for(int j=2*i;j<=1000000;j+=i)
		{
			judge[j] = 1;
		}


	int m,n;
	scanf("%d %d",&m,&n);

	for(int i=m;i<=n;i++)
		if(judge[i]==0) printf("%d\n",i);


		

	return 0;
}