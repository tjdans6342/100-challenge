#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,t;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	t = a*a + b*b + c*c + d*d + e*e;
	t = t%10;
	printf("%d",t);
}
