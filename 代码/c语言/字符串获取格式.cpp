#include <stdio.h>
int main()
{
	
	char string[100];
	int i,num=0,word=0;
	char c;
	gets(string);
	for (i=0;(c=string[i])!='\0';i++)
		if(c==' ')
		word++;
	return 0;
}
