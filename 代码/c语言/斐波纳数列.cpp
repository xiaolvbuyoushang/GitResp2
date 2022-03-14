#include <stdio.h>
int main()
{
	int i;
	int f[20]={1,1};
	for(i=2;i<=20;i++)
		{
		f[i]=f[i-2]+f[i-1];
		printf("%12d",f[i]);
		}
	printf("\n");
	return 0;
}
