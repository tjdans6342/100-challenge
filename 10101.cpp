#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a,b,c,p=0,q=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a+b+c == 180)
	{
		p=1;
	}
	a==b? q=1:true;
	a==c? q=1:true;
	b==c? q=1:true;
	a==b && b==c ? q=2:true;

	if(p && q==2)
	{
		printf("Equilateral");
	}
	else if (p && q==1)
	{
		printf("Isosceles");
	}
	else if (p)
	{
		printf("Scalene");
	}
	else
	{
		printf("Error");
	}



		

	return 0;
}