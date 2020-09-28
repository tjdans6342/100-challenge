// (M-1) - (gcd(N,M)-1) <gcd 함수 이해해야함>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){return a%b?gcd(b,a%b):b;}

int main()
{
	int n,m;
	scanf("%d %d", &n,&m);

	printf("%d",m-gcd(n,m));
		

	return 0;
}