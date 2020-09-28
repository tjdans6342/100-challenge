#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k,n,sum=0;
	scanf("%d",&n);
	for(int i=0; i<2*n; i++)
	{
		scanf(" %d", &k);
		if(k>=0)sum += k;
		else sum-=k;
	}
	printf("%d",sum);

		

	return 0;
	
}