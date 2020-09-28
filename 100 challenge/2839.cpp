//좀 어렵누
#include <bits/stdc++.h>

using namespace std;

int n,cnt=0,cnt5,cnt3;

int main()
{
	scanf("%d", &n);

	cnt5 = n/5;
	cnt3 = n/3;

	if(n%3 == 0) cnt= n/3;

	for(int i=1 ; i<=cnt5; i++)
	{
		for(int j=0; j<=cnt3; j++)
		{
			if(n == 5*i + 3*j)
			{
				cnt = i+j;
				break;
			}
		}
	}

	if(cnt!=0) printf("%d",cnt);
	else printf("-1");

	return 0;
}