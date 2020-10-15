#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	int mx = max(a,b);
	int mn = min(a,b);

	int r = mx%mn;
	if(r==0) return mn;
	return gcd(mn,r);
}


int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int gcdd = gcd(n,m);
	printf("%d\n",gcdd);
	printf("%d\n",n*m/gcdd);

	return 0;
}