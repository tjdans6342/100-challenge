#include <bits/stdc++.h>

using namespace std;

int main()
{
	int sum=0,n,N[101],a=1;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &N[i]);
		if(N[i]==0)
		{
			a=1;
		}	
		else
		{
			sum += a;
			a++;
		}
	}

	printf("%d", sum);		

	return 0;
}