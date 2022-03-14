#include <stdio.h>
int main()
{
	int f1=1,f2=1,f3;
	int i;
	printf("%12d%12d",f1,f2);
	for(i=1;i<=20;i++)
	{
		f3=f1+f2;
		printf("%12d\n",f3);
		f1=f2;
		f2=f3;
	}	
	return 0;
}
