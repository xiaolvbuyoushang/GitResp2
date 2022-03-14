#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a[10],m,n,i;
	printf("enter 10 integer numbers:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=1,m=a[0],n=0;i<10;i++)
	{
		if(max(m,a[i])>m)
			{
				m=max(m,a[i]);
				n=i;
			}
	}
	printf("the largest number is %d\nit is the %dth number",m,n);
	return 0;
}
