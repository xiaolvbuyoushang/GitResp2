#include <stdio.h>
#include <string.h>
 
int main( ) 
{
	int arr[26]={0};
	char c;
	
	while((c=getchar())!='\n')
	{
		if(!arr[c-'a'])
		{
			putchar(c);
			arr[c-'a']=1;
		}
	}
return 0;
}
