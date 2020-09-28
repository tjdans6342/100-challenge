//★
#include <bits/stdc++.h>

using namespace std;

pair<int,int> q[100001]; // pair자료형 정의
char p[100001][101];

int main()										//pair의 first에 나이 second에 입력받은 주소를 저장
{      											//그 주소를 인덱스로하는 char p[100001][101]에다 문자열을 저장
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d %s",&q[i].first,p[i]);
		q[i].second = i;
	}	

	sort(q,q+n);

	for(int i=0;i<n;i++)
	{
		printf("%d %s\n",q[i].first ,p[q[i].second]);
	}


	return 0;
}