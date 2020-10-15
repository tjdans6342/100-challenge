#include <bits/stdc++.h>
// 같은 경우 / 큰 경우 / 작은 경우(만들수 없는 수열임)
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	queue<int> que; // 1~n 을 작은순대로 보관 하는 곳

	for(int i=0; i<n; i++)
	{
		que.push(i+1);
	}

	queue<char> order; // '-', '+' 보관
	stack<int> st; // stack
	st.push(0);

	for(int i=0; i<n; i++)
	{
		int a;
		scanf(" %d", &a);
		if(st.top() == a) // 같으면 pop
		{
			// printf("-\n");
			order.push('-');
			st.pop();
		}

		else if(st.top()<a) // 크면 a까지 stack을 쌓고 pop
		{
			while(st.top()!=a)
			{
				st.push(que.front());
				// printf("+\n");
				order.push('+');
				que.pop();
			}
			// printf("-\n");
			order.push('-');
			st.pop();
		}

		else // 작으면 불가능한 상황임
		{
			printf("NO");
			return 0;
		}

	}

	while(!order.empty())
	{
		cout << order.front() << "\n";
		order.pop();
	}
		

	return 0;
}