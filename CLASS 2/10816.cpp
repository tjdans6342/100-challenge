#include <bits/stdc++.h>

using namespace std;

int check[20000001];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf(" %d",&a);
		check[a+10000000]++;
	}	

	int m;
	scanf(" %d",&m);
	for(int i=0;i<m;i++)
	{
		int a;
		scanf("%d",&a);
		printf("%d ",check[a+10000000]);
	}	
		

	return 0;
}