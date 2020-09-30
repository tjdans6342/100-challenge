#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d", &a, &b);
	c = (a*60 + b +24*60 -45)%(24*60);
	
	
	printf("%d %d", c/60,c%60);
	return 0;
}
