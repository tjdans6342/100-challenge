#include <bits/stdc++.h>

using namespace std;

char q[101];


int main()
{
	int i=0;
	scanf("%s",q);

	while(q[i] != 0)
	{
		for(int j=0; j<10 && q[i]!=0; j++)
		{
			printf("%c",q[i]);
			i++;
		}
		printf("\n");
		// printf("%c",q[i]);
		// i++;
		// j++;
		// if(j==10)
		// {
		// 	j=0;
		// 	printf("\n");
		// }
	}

	return 0;
}