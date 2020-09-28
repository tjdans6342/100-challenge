//한번 들어갈때 n씩 곱해서 n의n번씩 곱해진 경우(사실 순열이 아닌것을 몇개 제외하면서 구한 경우) 중에 순열만 골라서 출력

//A = n씩 곱해서 n의n번씩 곱해진 경우의수 = 프로그램이 실행하면서 확인하는 경우의수
//B = 순열이 아닌것을 몇개 제외하면서 구한 경우의수
//A > B =~ N!


#include <bits/stdc++.h>

using namespace std;

int n;
int res[9]; // n자리숫자 적어놓는 곳
bool check[9]; //숫자 카드

void f(int pos)
{
   if(pos==n)
   {
      for(int i=0;i<n;i++)
         printf("%d ", res[i]);
      printf("\n");
      return;
   }
   for(int i=1;i<=n;i++)
   {
      if(check[i]==false)
      {
         res[pos] = i;
         check[i] = true;
         f(pos+1);
         check[i] = false;
         // res[pos] = i;
         // f(pos+1);
      }
   }
}

int main()
{
   scanf("%d", &n);
   f(0);

   return 0;
}

/* EX) n = 3일때
1 1 1 
1 1 2 
1 1 3 
1 2 1 
1 2 2 
1 2 3 
1 3 1 
1 3 2 
1 3 3 
2 1 1 
2 1 2 
2 1 3 
2 2 1 
2 2 2 
2 2 3 
2 3 1 
2 3 2 
2 3 3 
3 1 1 
3 1 2 
3 1 3 
3 2 1 
3 2 2 
3 2 3 
3 3 1 
3 3 2 
3 3 3 
순서대로 확인을 하면서 반납알고리즘(?)을 해서
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1 
이와 같은 순서대로 출력됨. */
