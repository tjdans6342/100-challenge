#include <bits/stdc++.h>

using namespace std;

queue<pair<int,int>> que; // 이 형태 외우기
int it[101];
int order[101];

int main()
{
	int test_case;
	scanf("%d",&test_case);

	for(int i=0; i<test_case; i++)
	{
		int n,m;
		scanf(" %d %d",&n,&m);
		for(int j=0; j<n; j++)
		{
			int a;
			scanf(" %d", &a);
			que.push(pair<int,int>(a,j)); // pair형태 ( pair<자료형,자료형> (변수1,변수2) ) 기억하기
			it[j] = a;
		}
		sort(it,it+n,greater<int>()); // sort(begin, end, 사용자 정의 함수) - greater<int>() 은 내림차순임

		int cnt=0;
		while(true)
		{
			if(que.front().first == it[cnt])
			{
				order[cnt] = que.front().second; // pair.second() 가 아니라 pair.second 임
				que.pop();
				cnt ++;
			}
			else
			{
				que.push(que.front());
				que.pop();
			}

			if(que.empty()==1) break;
		}

		for(int j=0; j<n; j++)
		{
			if(order[j] == m) printf("%d\n",j+1);
		}
	}	
		

	return 0;
}