//pair의 정렬 이용
#include <bits/stdc++.h>

using namespace std;

pair<int,int> q[100001]; // pair자료형 정의  // q[i]는 q[i].first임
						
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d %d",&q[i].second, &q[i]);
	}	

	sort(q,q+n);

	for(int i=0;i<n;i++)
	{
		printf("%d %d\n",q[i].second,q[i]);
	}

	return 0;
}