#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j,k,T,R;
	char str[20];
	scanf("%d",&T);
	int list[T];
	for(i=0; i<T; i++)
	{
		scanf("%d%s",&R,str);
		char x[3*strlen(str)];
		for(j=0; j<strlen(str); j++)
		{
			for(k=0; k<R; k++)
			{
				x[3*j+k] = str[j];
			}
		}
		list[i] = x;
		printf("%s",list[i]);
	}
	for(i=0; i<T; i++)
	{
		printf("%s",list[i]);
	}
	
	return 0;
}
