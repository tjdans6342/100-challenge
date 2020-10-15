#include <bits/stdc++.h>

using namespace std;

int check[1001];
queue<int> q;

int main()
{
	int n;
	int k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
		check[i] = 1;
		
	int a,cnt=k-1;
	for(int i=k;true;i++)
	{
		if(check[i]==1) 
		{	
			cnt ++;
			if(cnt == k)
			{
				check[i] = 0;
				q.push(i);
				if(q.size()==n) break;
				cnt = 0;
			}
		}

		if(i==n) i=0;
	}
	printf("<");
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			printf("%d",q.front());
			q.pop();
			break;
		}

		printf("%d, ",q.front());
		q.pop();
	}	
	printf(">");

	return 0;
}