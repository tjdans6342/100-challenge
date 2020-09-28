#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int a,b,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d %d %d",&a,&b,&c);
		if(a > b-c) printf("do not advertise\n");
		else if(a == b-c) printf("does not matter\n");
		else printf("advertise\n");
	}	
		

	return 0;
}