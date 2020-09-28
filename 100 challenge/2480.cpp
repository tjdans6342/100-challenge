#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,q=0,sm,mx=0;

	scanf("%d %d %d",&a,&b,&c);
	//printf("%d\n",q);
	a==b? sm=a,q=1:true;
	a==c? sm=a,q=1:true;
	b==c? sm=b,q=1:true;
	a==b && b==c ? q=2:true;
	//printf("%d\n",q);
	if(q==2)
	{
		printf("%d",10000+a*1000);
	}
	else if(q==1)
	{
		printf("%d",1000+sm*100);
	}
	else
	{
		a>b? mx=a:mx=b;
		c>mx? mx=c:true;
		printf("%d",mx*100);
	}
	

	return 0;
}