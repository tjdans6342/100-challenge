#include <bits/stdc++.h>

using namespace std;

int a[2];

int main()
{
	int q[2][4];

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d", &q[i][j]);
			a[i] += q[i][j];
		}
	}	

	printf("%d",a[0]>=a[1]? a[0]:a[1]);
		

	return 0;
}