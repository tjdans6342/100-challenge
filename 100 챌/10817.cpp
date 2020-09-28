#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,n=0;
	scanf("%d %d %d", &a,&b,&c);

	a<=b&&b<=c? n=b:true;
	a<=c&&c<=b? n=c:true;
	b<=a&&a<=c? n=a:true;
	b<=c&&c<=a? n=c:true;
	c<=a&&a<=b? n=a:true;
	c<=b&&b<=a? n=b:true;

	printf("%d",n);

		

	return 0;
}