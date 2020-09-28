#include <bits/stdc++.h>

using namespace std;

int check[140];

int main()
{
	char q[101];
	scanf("%s",q);

	for(int i=0;true;i++)
	{	
		if(q[i]==0) break;
		check[q[i]]++;
	}

	for (int i=97;i<=122;i++)
		printf("%d ", check[i]);
		

	return 0;
	
}