#include <stdio.h>
int main() 
{
	float a,b,c,t;
	printf("��������������\n"); 
	scanf("%f%f%f\n",&a,&b,&c);
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
	
	printf("%6.2f\n",a);
	return 0;
}



