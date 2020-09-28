// 나머지의 활용
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1; true&&i<100000; i++)
	{
		if ((i%15 == a || (a==15? i%15 == 0 : false)) && (i%28 == b || (b==28? i%28 == 0 : false)) && (i%19 == c || (c==19? i%19 == 0 : false)))
		{
			printf("%d",i);
			break;
		}	
	}	
	return 0;
}