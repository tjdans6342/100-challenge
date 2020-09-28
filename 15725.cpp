//오류(런타임 에러 나오는 에러) 찾아야댐
#include <bits/stdc++.h>

using namespace std;

char q[16]; //여기서 무슨 문제가 있음
int l[15];
int n=1,sum=0,a=0,b=0;

int main()
{
	scanf("%s", q);
	printf("%d",q[0]);

	if(q[0]!=45)
	{
		for(int i=0;(q[i]!=120) && (i<15) ; i++)
		{
			l[i]=q[i]-48;
		// 	if(i>0) n *= 10;
		// 	if(i==14) a=1;
		}

		// for(int i=0 ; n>0 && i<10 ; i++)
		// {
		// 	sum += l[i]*n;
		// 	n /= 10;
		// }
	}

	// else
	// {
	// 	for(int i=1; q[i]!=120 && i<15 ; i++)
	// 	{
	// 		l[i]=q[i]-48;
	// 		if(i>1) n *= 10;
	// 		if(i==14) a=1;
	// 	}
		
	// 	for(int i=1; n>0 && i<10 ; i++)
	// 	{
	// 		sum -= l[i]*n;
	// 		n /= 10;
	// 	}

	// }



	if(a==1) printf("0");
	else printf("%d",sum);

	return 0;
}