#include <bits/stdc++.h>

// 1.No Number인경우
// 2-1. x == y가 true인 경우(x>=0)
// 2-2. x-y == 2가 true인 경우(x>=2)

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int x,y;
		scanf(" %d %d", &x,&y);
		if(x==y && x>=0) 
		{
			if(x%2 == 0) printf("%d\n",x+y);
			else printf("%d\n", x+y-1);
		}

		else if(x-y==2 && x>=2)
		{
			if(x%2 == 0) printf("%d\n",x+y);
			else printf("%d\n", x+y-1);
		}

		else printf("No Number\n");
	}	
		

	return 0;
}