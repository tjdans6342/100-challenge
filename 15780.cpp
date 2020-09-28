// 3,4 → 2, 5,6 → 3, 7,8 → 4
#include <bits/stdc++.h>

using namespace std;

int n,k;
int a,sum=0;

int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<k;i++)
	{
		scanf(" %d",&a);
		if(a%2 == 0) sum += a/2;
		else sum += a/2 +1;
	}	

	if(n<=sum) printf("YES");
	else printf("NO");
		

	return 0;
}