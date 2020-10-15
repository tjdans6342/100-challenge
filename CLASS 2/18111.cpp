#include <bits/stdc++.h>

using namespace std;

int board[501][501];


int main()
{
	int n;
	int m;
	int b;
	scanf("%d %d %d",&n,&m,&b);

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		{
			scanf(" %d", &board[i][j]);
		}


	int time = INT_MAX;
	int height;

	for(int i=0;i<=256;i++)
	{
		int block = b;
		int t = 0;
		for(int j=0; j<n; j++)
			for(int k=0; k<m; k++)
			{
				block += board[j][k] - i;
				if(board[j][k] > i) t += (board[j][k] - i)*2;
				else t += (i - board[j][k]);

			}

		if(block >= 0)
			if(t < time)
			{
				time = t;
				height = i;
			}
			else if(t == time)
			{
				height = max(height,i);
			}
	}

	printf("%d %d",time,height);

		

	return 0;
}