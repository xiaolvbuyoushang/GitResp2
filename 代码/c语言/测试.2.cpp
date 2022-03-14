#include <stdio.h>
int main()
{
	int a,b,c,d,t;
	printf("请输入四个数字\n");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(a>d)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=c;
		c=b;
		b=t;
	}
	if(b>d)
	{
		t=d;
		d=b;
		b=t;
	}
	if(c>d)
	{
		t=d;
		d=c;
		c=t;
	}
	
	printf("%d,%d,%d,%d",a,b,c,d);
	return 0; 
}














