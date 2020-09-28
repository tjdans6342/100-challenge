#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
	long long a,b;
	long long mx,mn;
	scanf("%lld %lld", &a,&b);
	a>b ? (mx=a,mn=b) : (mx=b,mn=a);

	if(abs(mx-mn)<= 1)
	{
		printf("0 ");
	}
	else
	{
		printf("%lld \n", mx-mn-1);

		for(long long i=mn+1; i<mx; i++)
		{
			printf("%lld ",i);
		}

	}	
		

	return 0;
}