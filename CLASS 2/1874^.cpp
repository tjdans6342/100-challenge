#include <bits/stdc++.h>

using namespace std;

// queue<char> order;
string odr;

int main()
{
	int n;
	scanf("%d",&n);


	int num[n];

	for(int i=0;i<n;i++)
		scanf(" %d",&num[i]);
		

	stack<int> st;
	int cnt=0;

	for(int i=1;i<=n;i++)
	{
		st.push(i);
		// order.push('+');
		odr += '+';

		while(!st.empty()&&st.top()==num[cnt])
		{
			st.pop();
			// order.push('-');
			odr += '-';
			cnt ++;
		}
	}

	if(st.empty())
	{
		// while(!order.empty())
		// {
		// 	cout << order.front() << endl;
		// 	order.pop();
		// }
		for(int i=0; i<odr.size(); i++)
			cout << odr[i] << "\n";
	}
	else printf("NO");

	return 0;
}