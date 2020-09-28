#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
	long long sum=0;
	int n;
	scanf("%d",&n);
	int x;
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &x);
		sum += pow(x/10,x%10);
	}	

	printf("%lld",sum);
		
	return 0;
}