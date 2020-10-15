#include <bits/stdc++.h>
//1+6+12+18+24+30+ ....
//1+6*1+6*2+6*3+6*4+6*5+ ....
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	if(n == 1)
	{
		printf("1");
		return 0;
	}
	int sum=1;
	for(int i=1;i<n;i++)
	{
		sum += 6*i;
		if(sum-6*i < n&&n <=sum)
		{
			printf("%d\n",i+1);
			return 0;
		}
	}

		

	return 0;
}