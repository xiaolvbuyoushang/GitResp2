#include<stdio.h>
int main()
{
	char x1;
	scanf("%c",&x1);
	if
		((x1>='A' && x1<='Z'))
		{
		x1=x1+32;
        printf("%c",x1);
		}
    else
    	if
    	((x1>='a' && x1<='z'))
        	{
        	x1=x1-32;
			printf("%c ",x1);
			}
		else
		printf("%c²»ÊÇ×ÖÄ¸",x1);
	return 0; 
	
}


