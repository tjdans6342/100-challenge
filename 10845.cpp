#include <bits/stdc++.h>

using namespace std;

int main()
{
	queue<int> s;
	int n,m;
	scanf("%d",&n);

	char q[20];
	for (int i =0; i<n;i++)
	{
		scanf("%s",q);

		if(!strcmp(q,"front"))
		{
			if (s.empty()==1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",s.front());
			}
		}
		if(!strcmp(q,"back"))
		{
			if (s.empty()==1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",s.back());
			}
		}
		else if(!strcmp(q,"size"))
		{
			printf("%d\n",s.size());
		}
		else if(!strcmp(q,"push"))
		{
			scanf("%d", &m);
			s.push(m);
		}
		else if(!strcmp(q,"pop"))
		{
			if (s.empty()==1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",s.front());
				s.pop();
			}
		}
		else if(!strcmp(q,"empty"))
		{
			printf("%d\n",s.empty());
			//printf("~~~~~~~~");
		}
		
	}

	return 0;
	
}