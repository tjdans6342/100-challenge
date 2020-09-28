//처음에 무조건 '('로 시작해야 됨
#include <bits/stdc++.h>

using namespace std;

int n,sum=0;
char q[51];
//stack<int> q;

int main()
{
	scanf("%d", &n);

	for(int i=0;i<n;i++)
	{
		scanf("%s",q);

		if(q[0]=='(')
		{
			for(int i=0; i<51 && q[i] != 0 ;i++)
			{
				if(q[i]=='(') sum++;
				else if (q[i]==')') sum--;

				if(sum == -1)
				{
					break;
				}
			}
		}

		else
		{
			sum=-1;
		}

		if(sum==0) printf("YES\n");
		else printf("NO\n");
		sum = 0; //초기화 시켜주기

	}	
	
	

	
	return 0;
}