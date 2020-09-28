#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,sum=0;
	scanf("%d", &a);
	
	for(int i=0; i<5;i++)
	{
		scanf(" %d",&b);
		if(b==a) sum+=1;
	}	

	printf("%d",sum);		

	return 0;
}