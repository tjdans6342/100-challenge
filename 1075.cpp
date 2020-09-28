// 100번 비교
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,f;
	scanf("%d %d", &n,&f);
	n -= n%100;

	for(int i=0;true/*&&i<100*/; i++)
	{
		if((n+i)%f==0)
		{
			i>9 ? printf("%d",i):printf("0%d",i);
			break;
		}
		//(n+i)%f == 0 ? printf("%d",i),break : true;  ← 이거 어떻게 헤야하는지
	}




	return 0;
	
	
}