#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
	int q1,q2,a,b;
	scanf("%d %d", &q1,&q2);

	b = (q1/2 +2 - sqrt((q1/2+2)*(q1/2+2) - 4*(q1+q2)))/2;
	a = (q1+q2)/b;

	printf("%d %d", a>b? a:b,a>b? b:a);
		

	return 0;
}