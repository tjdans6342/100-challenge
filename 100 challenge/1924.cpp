#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,sum=0;
	scanf("%d %d",&x,&y);

	for(int i=1; i<x; i++)
	{
		if(i==2) sum += 28;
		else if(i==4 || i==6 || i==9 || i==11) sum += 30;
		else sum += 31;
	}

	sum += y;

	if(sum % 7==1) printf("MON");
	else if(sum % 7==2) printf("TUE");
	else if(sum % 7==3) printf("WED");
	else if(sum % 7==4) printf("THU"); 
	else if(sum % 7==5) printf("FRI");
	else if(sum % 7==6) printf("SAT");
	else printf("SUN");

		

	return 0;
	
}