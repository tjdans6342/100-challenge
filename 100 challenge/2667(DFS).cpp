// Flood Fill 알고리즘
#include <bits/stdc++.h>

using namespace std;

const int a[] = {1,-1,0,0}; //변수값 고정
const int b[] = {0,0,1,-1}; //변수값 고정
int dp[26][26],check[26][26];
int num=0,cnt[400];
int n;

void f(int x,int y) //Flood Fill 알고리즘
{
	check[y][x] = num;
	cnt[num]++;

	for(int i=0;i<4;i++)
	{
		if(dp[y+b[i]][x+a[i]]!=1 || check[y+b[i]][x+a[i]]!=0) continue; //여사건 처리
		f(x+a[i],y+b[i]);
	}
}





int main()
{
	scanf("%d",&n); //지도의 크기(n) 받기


	for(int i=0;i<n;i++)			//집이 있는위치 입력 받기
	{
		for(int j=0;j<n;j++)
		{
			scanf("%1d", &dp[i][j]);
		}
	}



	for(int i=0; i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(dp[i][j]!=1 || check[i][j]!=0) continue; //여사건 처리
			num ++;
			f(j,i);
		}

		sort(cnt+1,cnt+1+num); //정렬

		printf("%d\n",num); //단지의 갯수

		for(int i=1;i<=num;i++)				//단지내 집의수
			printf("%d\n",cnt[i]);


	// for(int i=0;i<n;i++)
	// {	
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		printf("%d ",check[i][j]);
	// 	}
	// 	printf("\n");
	// }



	return 0;
}