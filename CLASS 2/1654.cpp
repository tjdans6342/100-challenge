#include <bits/stdc++.h>
// 이분 탐색 (Binary Search)
using namespace std;

long long num_list[1000001];

int main()
{
	int k;
	int n;
	scanf("%d %d",&k,&n);


	long long num_max = 0;

	for(int i=0; i<k; i++)
	{
		scanf(" %lld",&num_list[i]);
		num_max = max(num_list[i],num_max);
	}

	// 이분 탐색
	long long start_num = 1;
	long long last_num = num_max;
	long long mid_num;
	long long max_N;
	while(start_num <= last_num)
	{
		mid_num = (start_num + last_num) / 2;
		long long sum=0; // 반목문 안에서 정의해도 되네?
		for(int i=0; i<k; i++)
		{
			sum += num_list[i]/mid_num;
		}
		if(n<=sum)
		{
			max_N = mid_num;
			start_num = mid_num+1;
		} 
		else
		{
			last_num = mid_num-1;
		}

	}	
	
	printf("%lld\n",max_N);

	return 0;
}