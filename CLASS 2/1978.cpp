#include <bits/stdc++.h>

using namespace std;

int check[1001]; //35까지

int main()
{
	check[1] = 1;
	for(int i=2;i<35;i++)
	{
		for(int j=i+i;j<1001;j += i)
			check[j] = 1;
	}	

	int n;
	scanf("%d",&n);

	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		int a;
		scanf(" %d",&a);
		if(check[a] == 0) cnt ++;
	}	
		
	printf("%d",cnt);

	return 0;
}