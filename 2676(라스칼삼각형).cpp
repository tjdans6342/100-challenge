// 약간 논술 느낌
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d=1;
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{	
		scanf(" %d %d",&a,&b);
		c = a-3;
		if(a%2==0)
		{
			if(b>a/2) b=a-b;
		}
		else 
		{
			if(b>(a-1)/2) b=a-b;
		}	

		for(int i=0;i<b;i++)
		{
			if(i==0) d+=a-1;
			else
			{
				d+=c;
				c-=2;
			}
		}
		printf("%d\n",d);
		d=1;
	}
		

	return 0;
}