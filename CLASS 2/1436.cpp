#include <bits/stdc++.h>

using namespace std;

int it1[1000001];


int main()
{
	int cnt=0;
	for(int i=665; i<2700000 ; i++)
	{
		if(to_string(i).find("666")<8)
		{
			it1[cnt] = i;
			cnt ++;
		}
	}

	int n;
	scanf("%d",&n);
	printf("%d",it1[n-1]);

		

	return 0;
}