#include <bits/stdc++.h>

using namespace std;

int main()
{
	stack<int> s;
	int n,m;
	scanf("%d",&n);

	char q[20];
	for (int i =0; i<n;i++)
	{
		scanf("%s",q);

		if(!strcmp(q,"top"))
		{
			if (s.empty()==1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",s.top());
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
				printf("%d\n",s.top());
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