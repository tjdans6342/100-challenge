#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int sum = i;
		int a=i;
		while(a!=0)
		{
			sum += a%10;
			a /= 10;
		}
		if(sum == n)
		{
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
		

	return 0;
}