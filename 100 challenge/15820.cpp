#include <bits/stdc++.h>

using namespace std;

int s1,s2;
int a,b,c=1;

int main()
{
	scanf("%d %d",&s1,&s2);
	for(int i=0;i<s1;i++)
	{
		scanf(" %d %d", &a,&b);
		if(a!=b)
		{
			printf("Wrong Answer");
			c=0;
			break;
		}
	}

	for(int i=0;i<s2 && c;i++)
	{
		scanf(" %d %d", &a,&b);
		if(a!=b)
		{
			printf("Why Wrong!!!");
			c=0;
			break;
		}
	}

	if(c==1) printf("Accepted");

		

	return 0;
}