#include <stdio.h>

int main(void)
{
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int total = a*b*c;
	int cnt[10] ;
	int i;
	
	
	for(i=0; i<11; i++)   // cnt[10] = {0} ���� �ϸ� ���δ� 0���� ä���� 
	{
		cnt[i] = 0;
	}
	
	while(total >= 1)
	{
		cnt[total%10]++;
		total /= 10;
	}
	

	for(i=0; i<10; i++)
	{
		printf("%d \n",cnt[i]);
	}
	return 0;
}
