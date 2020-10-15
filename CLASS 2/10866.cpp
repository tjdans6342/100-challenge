#include <bits/stdc++.h>
// deque 이용
using namespace std;

int main()
{
	deque<int> dq;
	string answer;

	int n;
	cin >> n;
	cin.ignore(); // 버퍼를 버려줘야함!!

	for(int i=0;i<n;i++)
	{
		getline (cin,answer);
		// cout << answer <<endl;
		if(answer.substr(0,10) == "push_front")
		{
			dq.push_front(stoi(answer.substr(11)));
		}
		else if(answer.substr(0,9) == "push_back")
		{
			dq.push_back(stoi(answer.substr(10)));
		}
		else if(answer == "pop_front")
		{
			if(dq.empty() == 1) cout << -1 <<endl;
			else 
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if(answer == "pop_back")
		{
			if(dq.empty() == 1) cout << -1 <<endl;
			else
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if(answer == "size")
		{
			cout << dq.size() << endl;
		}
		else if(answer == "empty")
		{
			cout << dq.empty() << endl;
		}
		else if(answer == "front")
		{
			if(dq.empty() == 1) cout << -1 << endl;
			else cout << dq.front() << endl;
		}
		else if(answer == "back")
		{
			if(dq.empty() == 1) cout << -1 << endl;
			else cout << dq.back() << endl;
		}
	}	
		

	return 0;
}