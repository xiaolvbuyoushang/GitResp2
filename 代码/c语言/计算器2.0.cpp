#include <stdio.h>
int main()
{
	void action1(double a,double b);
	void action2(double a,double b);
	void action3(double a,double b);
	void action4(double a,double b);
	printf("A-�ӷ�\nB-����\nC-�˷�\nD-����\n\n����������ģʽ\n");
	char ch;
	ch=getchar();
	double a;
	double b;
	printf("��������������:\n") ;
	scanf("%lf%lf",&a,&b); 
	switch(ch)
	{
		case'a':
		case'A':
			action1(a,b);
			break;
		case'b':
		case'B':
			action2(a,b);
			break;
		case'c':
		case'C':
			action3(a,b);
			break;
		case'd':
		case'D':
			action4(a,b);
			break;
		default:putchar('\a');
	}
	return 0;
}
void action1(double a,double b)
	{
		printf("a+b=%7.2lf",a+b);
	}
void action2(double a,double b)
	{
		printf("a-b=%7.2f",a-b);
		
	}
void action3(double a,double b)
	{
		printf("a*b=%7.2f",a*b);
	}
void action4(double a,double b)
	{
		printf("a/b=%7.2f",a/b);
	}













