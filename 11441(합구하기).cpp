//Prefix
#include <bits/stdc++.h>

using namespace std;

//int arr[100001];
int sum[100001];

int main()
{
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++)
	{
		int c;
		scanf(" %d",&c/*arr[i+1]*/);
		sum[i+1] = sum[i] + c/*arr[i+1]*/;
	}

	int m;
	scanf(" %d",&m);
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf(" %d %d",&a,&b);
		printf("%d\n", sum[b] - sum[a-1]);
	}	
		

	return 0;
}