#include <bits/stdc++.h>
// 이분 탐색( Binary Search )
using namespace std;




int main()
{
	int n;
	long long m;
	scanf("%d %lld",&n,&m);

	long long height_max = 0;
	long long tree_height[n];
	for(int i=0;i<n;i++)
	{
		scanf(" %lld",&tree_height[i]);
		height_max = max(height_max,tree_height[i]);
	}


	long long left_num = 0;
	long long right_num = height_max;
	long long mid_num;

	long long result;
	while(left_num <= right_num)
	{
		long long total_length = 0;
		mid_num = (right_num + left_num)/2;

		for(int i=0;i<n;i++)
		{
			if(tree_height[i]>mid_num) total_length += tree_height[i] - mid_num;
		}

		if(total_length < m)
		{
			right_num = mid_num-1;
		}
		else
		{
			left_num = mid_num+1;
			result = mid_num;
			// printf("%lld\n",result);
		}
	}

	printf("%lld",result);



	return 0;
}