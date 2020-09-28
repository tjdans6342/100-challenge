#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,b,cnt=0,m=-1;
	int p,q;
	scanf("%d", &n);
	if (n<10) n *= 10;
	m=n;
	while(true)
	{
		p = m/10;
		q = m%10;
		m = q*10 + (p+q)%10;
		//printf("%d\n",m);
		cnt ++;
		if(n == m) break;
	}
	printf("%d",cnt);

		

	return 0;
	
}