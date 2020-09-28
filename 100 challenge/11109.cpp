#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,d,n,s,p;
	scanf("%d", &a);
	for(int i=0; i<a;i++)
	{
		scanf(" %d", &d);
		scanf(" %d", &n);
		scanf(" %d", &s);
		scanf(" %d", &p);
		if((n*s)>(d+n*p)) printf("parallelize\n");
		else if((n*s)<(d+n*p)) printf("do not parallelize\n");
		else printf("does not matter\n");
	}

		

	return 0;
	
}