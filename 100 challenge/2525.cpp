// 시간 단위 변경 알고리즘
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a1,a2,b,sum;
	scanf("%d %d %d",&a1,&a2,&b);

	sum = a1*60 + a2 + b;
	sum %= 1440;

	printf("%d %d",sum/60,sum%60);

		

	return 0;
}