// 생각좀 해야되네
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,v,cnt=0;
	scanf("%d %d %d",&a,&b,&v);
	v -= a;
	cnt ++;
	if(v%(a-b)==0) cnt += v/(a-b);
	else cnt += v/(a-b) + 1;
	// while(v > 0)
	// {
	// 	v-=a;
	// 	cnt ++;
	// 	if(v <= 0)break;
	// 	v+=b;
	// }
	printf("%d",cnt);
		

	return 0;
	
}