
#include <bits/stdc++.h>

using namespace std;

pair<pair<string,int>,pair<int,int>> a[100001];

bool cmp(const pair<pair<string,int>,pair<int,int>> &a, const pair<pair<string,int>,pair<int,int>> &b )
{
	if(a.first.second != b.first.second) return a.first.second > b.first.second;
	if(a.second.first != b.second.first) return a.second.first < b.second.first;
	if(a.second.second != b.second.second) return a.second.second > b.second.second;
	return a.first.first < b.first.first;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i].first.first >> a[i].first.second >> a[i].second.first >> a[i].second.second;
	}	

	sort(a,a+n, cmp);
	for(int i=0;i<n;i++)
		cout << a[i].first.first << '\n';

	return 0;
}