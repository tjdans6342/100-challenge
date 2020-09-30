#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[101];
	int i,L[150];
	scanf("%s", text);
	for(i=0; i<149;i++)
	{
		L[i] = -1;
	}
	for(i=strlen(text)-1;i>=0;i--)
	{
		L[(int)text[i]] = i;
	}
	
	for (i=97;i<123;i++)
	{
		printf("%d ",L[i]);
	}
	return 0;
}
