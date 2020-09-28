// 직선 조건
// float로 받아야하는데 int로 받아서 틀림
#include <bits/stdc++.h>

using namespace std;

int main()
{
	float a[2],b[2],c[2];
	//먼저 입력 받기
	scanf("%f %f", &a[0],&a[1]);
	scanf(" %f %f", &b[0],&b[1]);
	scanf(" %f %f", &c[0],&c[1]);

	if(b[0]==a[0] || c[0]==b[0] || c[0]==a[0]) // 세로로 겹치는 경우		
	{
		if(b[0]==a[0] && c[0]==b[0] && c[0]==a[0])
		{
			printf("WHERE IS MY CHICKEN?");
		}
		else
		{
			printf("WINNER WINNER CHICKEN DINNER!");
		}
	}
	else// 가로로 겹치는 경우 and 나머지 경우
		{
			if((b[1]-a[1])/(b[0]-a[0]) == (c[1]-b[1])/(c[0]-b[0]))
			{
				printf("WHERE IS MY CHICKEN?");
			}
			else
			{
				printf("WINNER WINNER CHICKEN DINNER!");
			}
		}

	return 0;
	
}