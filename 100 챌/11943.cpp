//a~d,b~c
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d,q1,q2;
	scanf("%d %d %d %d", &a,&b,&c,&d);

	q1 = a+d, q2 = b+c;
	printf("%d", q1>q2? q2:q1);
		

	return 0;
}