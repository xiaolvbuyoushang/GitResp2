#include <stdio.h>
int main()
 {
 	int a[4][5];
 	int i,j;
 	for (i=0;i<4;i++)
 	for (j=0;j<5;j++)
 	{
 		a[i][j]=(i+1)*(j+1);
 		printf("%d\t",a[i][j]);
 		if((j+1)%5==0)
 		printf("\n");
	 }
	 return 0;
 }
