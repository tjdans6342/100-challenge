//이중for문을 이용해서 하나씩 비교하고 가장 작은값 출력

#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int p[5],q[5],mn=100000;
	for (int i = 0; i < 3; ++i)
	{
		scanf("%d", &p[i]);
	}
	for (int i = 0; i < 2; ++i)
	{
		scanf(" %d", &q[i]);
	}
	
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if(p[i]+q[j]-50<mn)
			{
				mn = q[j] + p[i] - 50;
			}
		}
	}

	printf("%d", mn);
	
	return 0;
}