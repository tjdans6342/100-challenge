//산술: 합 / N
//중앙: (N/2)번째 값
//check[i] 가 가장 큰값
//q[a-1]-q[0]
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int q[500001],check[8001];
int n,a=0,sum=0;

int main()
{
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		int b;
		scanf("%d",&b);
		check[b+4000]++;
	}	

	//최빈값
	int mx=0,r[8001];
	r[1] = 4001;
	for(int i=0;i<8001;i++)
	{
		if(mx<check[i])
		{
			mx = check[i];
		}
	}

	int c=0;
	for(int i=0;i<8001;i++)
	{
		if(mx==check[i])
		{
			r[c]=i-4000;
			c++;
		}
	}

	for(int i=0;i<8001;i++)
	{
		while(check[i]>=1)
		{
			q[a]=i-4000;
			a++;
			check[i]--;
			sum += i-4000; //산술평균

		}
	}


	printf("%d\n",(int)round((float)sum/n)); 
	printf("%d\n", q[n/2]);
	if(r[1] == 4001) printf("%d\n",r[0]);
	else printf("%d\n",r[1]);
	printf("%d\n",q[n-1]-q[0]);

	// printf("%d",((int)(10*(float)-16.7))%10);
	// printf("%d\n",(int)ceil((float)-16.7));
	//printf(" %d" ,(int)floor((float)(-9)/5));


	return 0;
}