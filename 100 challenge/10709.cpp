#include <bits/stdc++.h>

using namespace std;

char dp[101][101];
//int check [101][101];
int h,w;

int main()
{
	scanf("%d %d",&h,&w);

	for(int i=0; i<h; i++)
		for(int j=0; j<w; j++)
		{
			scanf(" %1c", &dp[i][j]);
		}

	int a=0;
	for(int i=0; i<h; i++)
	{	
		for(int j=0; j<w; j++)
		{
			if(dp[i][j]=='c')
			{
				//check[i][j] = 0;
				printf("0 ");
				a = 1;
			}
			else 
			{
				if(a==0) printf("-1 "); //check[i][j] = -1;
				else 
				{
					//check[i][j] = a;
					printf("%d ",a);
					a++;
				}
			}
		}
		a=0;
		printf("\n");
	}

		

	return 0;
}