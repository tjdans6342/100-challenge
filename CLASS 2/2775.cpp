#include <bits/stdc++.h>

using namespace std;

int q[15][15];

int main()
{
	for(int j=1;j<15;j++)
		q[0][j] = j;
	for(int i=0;i<15;i++)
		q[i][1]=1;

	for(int i=1;i<15;i++)
		for(int j=2;j<15;j++)
		{
			q[i][j] = q[i-1][j]+q[i][j-1];
		}
	
	// for(int i=0;i<15;i++)
	// {
	// 	for(int j=1;j<15;j++)
	// 		printf("%d ",q[i][j]);
	// 	printf("\n");
	// }

	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int a,b;
		scanf(" %d %d",&a,&b);
		printf("%d\n",q[a][b]);
	}


	return 0;
}