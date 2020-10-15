#include <bits/stdc++.h>

using namespace std;

queue<int> q;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
		q.push(i);

	while(q.size()>1)
	{
		//지우기(개수 변동 생기는 곳)
		q.pop();
		if(q.size() == 1) break;
		//지우고 넣기
		int a;
		a = q.front();
		q.pop();
		q.push(a);
	}

	printf("%d", q.front());

		
		

	return 0;
}