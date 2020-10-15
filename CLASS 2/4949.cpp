#include <bits/stdc++.h>

using namespace std;

// 갯수 통과
// 순서 통과
// 짝 통과
string str1;
char chr1[100];

int main()
{
	while(true)
	{
		getline(cin,str1);
		if(str1 == ".") break;
		int a=0;
		int b=0;
		int judge=0;
		//갯수 통과 & 순서 통과
		for(int i=0;i<str1.size();i++)
		{
			if(str1[i] == '(')
				a += 1;
			else if(str1[i] == ')')
				a -= 1;
			else if(str1[i] == '[')
				b += 1;
			else if(str1[i] == ']')
				b -= 1;
			if((a<0) or (b<0))
			{
				continue;
			}
		}

		if((a!=0) or (b!=0)) judge = 1;
		if (judge==1)
		{
			printf("no\n");
			continue;
		}

		// 짝 통과
		int cnt = 0;
		for(int i=0; i<str1.size(); i++)
		{
			if(str1[i] == '(')
			{
				chr1[cnt] = ')';
				cnt ++;
			}
			else if(str1[i] == '[')
			{
				chr1[cnt] = ']';
				cnt ++;
			}
			else if(str1[i] == ')')
			{
				if(chr1[cnt-1] == ')')
				{
					cnt--;
					chr1[cnt] = 0;
				}
				else
				{
					judge = 1;
				}
			}
			else if(str1[i] == ']')
			{
				if(chr1[cnt-1] == ']')
				{
					cnt--;
					chr1[cnt] = 0;
				}
				else
				{
					judge = 1;
				}
			}
			// for(int k=0;k<5;k++)
			// {
			// 	printf("%c ",chr1[k]);
			// }
			// printf("\n");
		}

		if (judge==1)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
	}


	return 0;
}