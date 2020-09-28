#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
	int n,w,h,mx;
	int a;
	scanf("%d %d %d",&n,&w,&h);
	mx = sqrt(w*w + h*h);

	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		if(mx>=a) printf("DA\n");
		else printf("NE\n");
	}	
		

	return 0;
}