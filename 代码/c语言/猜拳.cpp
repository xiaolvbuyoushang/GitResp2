#include <stdio.h>
#include <stdlib.h>
int main()
{
	int d,x;
	char ch;
	printf("������'a'=����,'b'=ʯͷ,'c'=��\n\n");
	scanf("%c",&ch);
	printf("���:");
	switch(ch)
	{
		case'a':
		printf("����\n");
		d=1;
		break;
		case'b':
		printf("ʯͷ\n");
		d=2;
		break;
		case'c':
		printf("��\n");
		d=3;
		break; 
	    default:putchar('\a');
	}	
	printf("%d\n",d);
	x=rand()%3;
	printf("%d\n",x);
	printf("���Գ�:");
	if(x==1)
		printf("����\n");
	else if(x==2)
		printf("ʯͷ\n");
	else
		printf("��\n");
	
	if(d==x)
		printf("˫��ƽ��\n");
	else if((d==1&&x==0)||(d==2&&x==1)||(d==3&&x==2))
		printf("��Ӯ��\n");
	else
		printf("������\n");
	return 0;
	 	
}
