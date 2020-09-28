#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&n);
			sum += n;
		}
		if(sum==0) printf("D\n");
		else if(sum==1) printf("C\n");
		else if(sum==2) printf("B\n");
		else if(sum==3) printf("A\n");
		else printf("E\n");
		sum = 0;
	}	

	return 0;
	
}