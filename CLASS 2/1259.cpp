#include <bits/stdc++.h>
#include <string.h>

using namespace std;

char p[10];

int main()
{
	while(true)
	{
		scanf("%s", p);
		if(p[0]=='0') break;
		int a = strlen(p);
		int b = a/2;
		int jg=0;
		for(int i=0;i<b;i++)
		{
			if(p[i] != p[a-i-1]) jg = 1;
		}
		printf("%s\n",jg == 0 ? "yes" : "no");

	}

		

	return 0;
}