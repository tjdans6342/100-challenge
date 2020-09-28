#include <bits/stdc++.h>

using namespace std;

int q[201][3];
int check[3][101];


int main()
{
	int n,sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf(" %d", &q[i][j]);
			check[j][q[i][j]]++;
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(check[j][q[i][j]]==1) sum += q[i][j];
		}
		printf("%d\n",sum);
		sum=0;
	}

	return 0;
}