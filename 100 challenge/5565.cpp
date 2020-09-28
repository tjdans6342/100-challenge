#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	scanf("%d",&a);
	for(int i=0; i<9; i++)
	{
		scanf("%d",&b);
		a-=b;
	}

	printf("%d",a);

		

	return 0;
}