#include <bits/stdc++.h>
#include <string.h>

using namespace std;

// 1.x가 없을때
// 2-1.x앞에 아무것도 없을때
// 2-2.x앞에 무엇이 있을때

char p[21];

int main()
{
	scanf("%s", p);
	int len = strlen(p);

	int a=0;
	int b=-1;
	for(int i=0;i<len;i++)
	{
		if(p[i] == 'x')
		{
			a=1;
			b=i;
		}
	}		

	if(a==0) printf("0");
	else
	{
		if(b==0)
		{
			printf("1");
		}
		else
		{
			if(p[0]=='-' && b==1) printf("-1");
			else
			{	
				for(int i=0;i<b;i++)
				{
					printf("%c",p[i]);
				}
			}
		}
	}

		

	return 0;
}