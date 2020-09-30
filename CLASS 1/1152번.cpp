#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, point = 0;
	char sentence[1000000];
	scanf("%[^\n]", sentence);
	for(i=0; i<strlen(sentence); i++)
	{
		if(sentence[i] == ' ')
		{
			point ++;
		}
	}
	if(sentence[0]==' ')
	{
		point --;
	}
	if(sentence[strlen(sentence)-1]==' ')
	{
		point --;
	}
	printf("%d", ++point);
	return 0;
}
