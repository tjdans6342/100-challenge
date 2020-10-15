#include <bits/stdc++.h>

using namespace std;

int check1[9][9];
int check2[9][9];
int p[51][51];

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			char a;
			scanf(" %1c",&a); // %1c 는 입력크기를 말하는 거임.
			if(a=='B') p[i][j] = 0;
			else p[i][j] = 1;
		}

	// for(int i=1;i<=n;i++)
	// {
	// 	for(int j=1;j<=m;j++)
	// 		printf("%d",p[i][j]);
	// 	printf("\n");
	// }

	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if((i+j-1)%2 == 0)
			{
				check1[i][j]=0;
				check2[i][j]=1;
			}
			else
			{
				check1[i][j]=1;
				check2[i][j]=0;
			}
		}
	}

	// for(int i=1;i<=8;i++)
	// {
	// 	for(int j=1;j<=8;j++)
	// 		printf("%d",check1[i][j]);

	// 	printf("\n");
	// }		

	int mn = 84;

	for(int i=1;i<=n-7;i++)
		for(int j=1;j<=m-7;j++)
		{
			int cnt=0;
			for(int ii=1;ii<=8;ii++)
				for(int jj=1;jj<=8;jj++)
				{
					if(p[i+ii-1][j+jj-1] != check1[ii][jj]) cnt++;
				}
			if(mn > cnt) mn = cnt;

			cnt=0;
			for(int ii=1;ii<=8;ii++)
				for(int jj=1;jj<=8;jj++)
				{
					if(p[i+ii-1][j+jj-1] != check2[ii][jj]) cnt++;
				}
			if(mn > cnt) mn = cnt;
		}

		printf("%d",mn);


	return 0;
}