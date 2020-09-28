#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	int x,y,z;
	int sum=0;

	for(int i=0; i<3;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		scanf(" %d %d %d",&x,&y,&z);
		sum = (x-a)*3600+(y-b)*60+(z-c);
		printf("%d %d %d",sum/3600,(sum%3600)/60,(sum%3600)%60);
		sum = 0;
		printf("\n");
	}
		

	return 0;
}