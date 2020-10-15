#include <bits/stdc++.h>

using namespace std;

int main()
{
	int L;
	long long sum=0;
	scanf("%d",&L);
	char q[51];
	long long p[51];
	long long a = 1;
	scanf("%s",q);
	for(int i=0;i<L;i++)
	{
		p[i] = q[i]-96;
		// printf("%d\n",p[i]);
		sum +=(p[i]*a)%1234567891;
		a *= 31;
		a = a%1234567891;
	}

	printf("%d\n",sum%1234567891);

		

	return 0;
}