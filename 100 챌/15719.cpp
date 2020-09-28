#include <bits/stdc++.h>

using namespace std;

long long n;
long long sum;


int main()
{
	scanf("%lld",&n);

	sum = -(n-1)*n/2;

	for(int i=0; i<n; i++)
	{
		long long a;
		scanf("%d", &a);
		sum += a;
	}

	printf("%lld",sum);

	return 0;
}