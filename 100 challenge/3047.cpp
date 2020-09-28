#include <bits/stdc++.h>

using namespace std;

int check[101];
int q[3];

int main()
{
	for(int i=0; i<3; i++)
	{
		int a;
		scanf("%d", &a);
		check[a] ++;
	}

	int b=0;
	for(int i=0; i<101;i++)
		if(check[i] == 1)
		{
			q[b] = i;
			b++;
		}

	char p[3];
	scanf("%s",p);
	for(int i=0;i<3;i++)
	{
		if(p[i]=='A') printf("%d ",q[0]);
		else if(p[i]=='B') printf("%d ",q[1]);
		else if(p[i]=='C') printf("%d ",q[2]);
	}

	return 0;
}