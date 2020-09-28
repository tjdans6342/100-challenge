#include <bits/stdc++.h>

using namespace std;

pair <string,int> p[3];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin >> p[0].first >> p[0].second;
		cout << p[0].first;
		if(p[0].second >= 97) printf(" A+\n");
		else if(p[0].second >= 90) printf(" A\n");
		else if(p[0].second >= 87) printf(" B+\n");
		else if(p[0].second >= 80) printf(" B\n");
		else if(p[0].second >= 77) printf(" C+\n");
		else if(p[0].second >= 70) printf(" C\n");
		else if(p[0].second >= 67) printf(" D+\n");
		else if(p[0].second >= 60) printf(" D\n");
		else printf(" F\n");
	}	
		

	return 0;
}