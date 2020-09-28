#include <bits/stdc++.h>

using namespace std;

int n,m,k;
int check[12][12];
pair<int,pair<int,int>> dot[101];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};




int sum=0;
int mx=-100000001;
int b=0;
// int asd = 0; //함수 f() 반복 횟수 세기
int a=0; //최대값 한번 나오면 멈추게 하기 위함
void f(int pos)
{
	if(pos == k)
	{
		// printf("%d",sum);
		// a = 1;
		if(mx < sum) mx = sum;
		// printf(" %d\n", asd);
		return;
	}


	for(int i=b;i<n*m;i++)
	{
		// if(a==1) break;
		// asd ++;
		b=i+1;
		int x=dot[i].second.first, y=dot[i].second.second;
		if(check[y][x] == 0) //check가 0이여야함
		{
			sum += dot[i].first;
			check[y][x]++;
			for(int j=0;j<4;j++)
				check[y+dy[j]][x+dx[j]]++;
			f(pos+1);
			sum -= dot[i].first;
			check[y][x]--;
			for(int j=0;j<4;j++)
				check[y+dy[j]][x+dx[j]]--;
		}
	}

}





int main()
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<=m+1;i++)
		check[i][0] ++;
	for(int i=0;i<=m+1;i++)
		check[i][n+1] ++;
	for(int j=1;j<=n;j++)
		check[0][j] ++;
	for(int j=1;j<=n;j++)
		check[m+1][j] ++;

	// for(int i=0;i<=m+1;i++)
	// {
	// 	for(int j=0;j<=n+1;j++)
	// 		printf("%d ",check[i][j]);
	// 	printf("\n");
	// }

	int cnt=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			int tmp;
			scanf(" %d",&tmp);
			dot[cnt].first = tmp;
			dot[cnt].second.first = j;
			dot[cnt].second.second = i;
			cnt ++;
		}

	sort(dot,dot+n*m);

	for(int i=0;i<n*m;i++)
	{
		printf("%d %d %d\n",dot[i].first,dot[i].second.first,dot[i].second.second);
	}


	f(0);
	printf("%d",mx);

	return 0;
}