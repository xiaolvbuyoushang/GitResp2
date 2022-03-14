#include <stdio.h>
#include <stdlib.h>
int main()
{
	int d,x;
	char ch;
	printf("请输入'a'=剪刀,'b'=石头,'c'=布\n\n");
	scanf("%c",&ch);
	printf("你出:");
	switch(ch)
	{
		case'a':
		printf("剪刀\n");
		d=1;
		break;
		case'b':
		printf("石头\n");
		d=2;
		break;
		case'c':
		printf("布\n");
		d=3;
		break; 
	    default:putchar('\a');
	}	
	printf("%d\n",d);
	x=rand()%3;
	printf("%d\n",x);
	printf("电脑出:");
	if(x==1)
		printf("剪刀\n");
	else if(x==2)
		printf("石头\n");
	else
		printf("布\n");
	
	if(d==x)
		printf("双方平局\n");
	else if((d==1&&x==0)||(d==2&&x==1)||(d==3&&x==2))
		printf("你赢了\n");
	else
		printf("你输了\n");
	return 0;
	 	
}
