#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q[6],sum=0;

	for(int i=0; i<5; i++)
	{
		scanf("%d",&q[i]);
		q[i] <40 ? q[i] = 40:true;
		sum += q[i];
	}	

	printf("%d",sum/5);
	return 0;
	
	
}