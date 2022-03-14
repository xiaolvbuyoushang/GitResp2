#include <stdio.h>
int main()
{
	double x,y;
	printf("«Î ‰»Îx\n");
	scanf("%LLf",&x);
	if(x<1)
	y=2*x;
	else
		if((x>=1)&&(x<10))
		y=4*x-1;
		else
		y=6*x-11;
	printf("%Lf",y);
	return 0;
	
	
	
	
	
	
}

