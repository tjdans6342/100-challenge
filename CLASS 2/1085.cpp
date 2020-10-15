#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,w,h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	int a,b;
	a=w-x;
	b=h-y;

	printf("%d",min(min(a,b),min(x,y))); // min(a,b) 함수 : a,b중 작은값을 반환

	return 0;
}