//시간 초과가 문제가 안되니 easy한 문제
#include <bits/stdc++.h>

using namespace std;

int p[101];

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) scanf(" %d",&p[i]);

	int a;
	int bj=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1;k<n;k++)
			{
				a = p[i] + p[j] + p[k];
				if(a<=m && a > bj) bj = a;
			}

	printf("%d",bj);

		

	return 0;
}