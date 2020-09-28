#include <bits/stdc++.h>

using namespace std;

int check[10001];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d" , &a);
		check[a]++;
	}	

	for(int i=1;i<10001;i++)
	{
		while(check[i]>=1)
		{
			printf("%d\n", i);
			check[i]--;
		}
	}	
		

	return 0;
}