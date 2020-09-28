#include <bits/stdc++.h>

using namespace std;

pair<int,string> p[20001];

int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0;i<n;i++)
	{
		cin >> p[i].second;
		p[i].first = p[i].second.size(); // str1.size() : str1의 크기를 반환해줌
	}	

	sort(p,p+n);

	int a=1;
	string b="11";

	for (int i = 0; i < n; ++i)
	{
		if(a == p[i].first && b == p[i].second) continue;
		cout << p[i].second << '\n';
		a = p[i].first;
		b = p[i].second;
	}
		

	return 0;
}