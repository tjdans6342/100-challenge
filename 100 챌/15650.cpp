//이전 문제에서 숫자의 크기 비교하는 부분만 넣으면 됨.

#include <bits/stdc++.h>

using namespace std;

int n,m;
int M[9]; //순열 저장하는 곳
int check[9]; //숫자카드


void f(int pos)
{
	if (pos==m)
	{
		for(int i=0;i<m;i++)
		{
			printf("%d ",M[i]);
		}
		printf("\n");
		return;
	}

	for(int i=1;i<=n;i++)
	{
		if(check[i] == false && (M[pos-1]<i /*|| pos == 0*/))
		{
			M[pos]=i;
			check[i] = true;  // 쓰고
			f(pos+1);
			check[i] = false;  // 반납
		}

	}


}



int main()
{
	scanf("%d %d", &n,&m);
	f(0);	

	return 0;
}