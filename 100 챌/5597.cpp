#include <bits/stdc++.h>

using namespace std;

int check[31];

int main()
{
	int a;
	for(int i=0;i<28;i++)
	{
		scanf("%d", &a);
		check[a]++;
	}	

	for(int i=1; i<=30; i++)
	{
		if(check[i]==0) printf("%d\n",i);
	}

		

	return 0;
}