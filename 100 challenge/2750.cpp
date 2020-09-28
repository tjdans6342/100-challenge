#include <bits/stdc++.h>

using namespace std;

int check[2002];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		int a;
		scanf("%d", &a);
		check[a+1000]++;
	}	

	for(int i=0; i<2002;i++)
		if(check[i]==1) printf("%d\n",i-1000);
	

	return 0;
}