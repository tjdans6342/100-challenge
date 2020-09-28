#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d;
	int p;
	int x,y;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&p);
	x = a*p;
	y = p>c? (b+(p-c)*d):(b);

	printf("%d", x>y? y:x);
		

	return 0;
}