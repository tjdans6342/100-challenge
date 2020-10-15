#include <bits/stdc++.h>

using namespace std;

int student[51][3];


int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d %d", &student[i][0],&student[i][1]);
	}

	for(int i=0;i<n;i++)
	{	
		int cnt = 1;
		for(int j=0;j<n;j++)
		{
			if(student[j][0] > student[i][0] && student[j][1] > student[i][1])
				cnt ++;
		}
		student[i][2] = cnt;
		cnt = 1;
	}

	for(int i=0;i<n;i++)
		printf("%d ", student[i][2]);	

		

	return 0;
}