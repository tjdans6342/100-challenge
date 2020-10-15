#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);

	int sum=1;
	for(int i=0;i<k;i++)
	{
		sum *= n-i;
	}	

	for(int i=0;i<k;i++)
	{
		sum /= i+1;
	}

	printf("%d", sum);

	return 0;
}