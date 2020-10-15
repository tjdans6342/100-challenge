#include <bits/stdc++.h>
// stack 이용
using namespace std;

stack<int> st;

int main()
{
	int k;
	scanf("%d",&k);


	int num;

	for(int i=0; i<k; i++)
	{
		scanf(" %d",&num);
		if(num==0) st.pop();
		else st.push(num);
	}

	
	int sum=0;

	while(!st.empty())
	{
		sum += st.top();
		st.pop();
	}

	printf("%d\n",sum);

		

	return 0;
}