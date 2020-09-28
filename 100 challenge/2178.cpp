#include <bits/stdc++.h>

using namespace std;

int dp[101][101];
int check[101][101];
int n,m;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int main()
{
	scanf("%d %d",&n,&m);

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%1d", &dp[i][j]);

	queue <pair<int,int>> bfs; //저장하는 곳

	bfs.push({1,1});
	check[1][1]=1;
	int cnt=1;
	while(!bfs.empty())
	{
		int size = bfs.size();
		while(size--) //다음 사이즈 추가 && 길 찾기 알고리즘
		{
			int x=bfs.front().first, y=bfs.front().second;
			bfs.pop();
			for(int i=0;i<4;i++)
			{
				int nx=x+dx[i], ny=y+dy[i];
				if(dp[ny][nx]==0 || check[ny][nx]==1 || nx<1 || nx>m || ny<1 || ny>n ) continue; //안되는 경우
				check[ny][nx] = 1;
				bfs.push({nx,ny});
				if(nx==m && ny==n)
				{
					printf("%d",cnt+1);
					return 0;
				}
			}
			
		}
		cnt ++;
	}
	

	return 0;
}