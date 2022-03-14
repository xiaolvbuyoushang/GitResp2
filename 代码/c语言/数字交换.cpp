#include <stdio.h>
int main()
{
	int a,b;
	void swap(int x,int y);
	printf("请交换前两个数.\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("交换后的两个数为:\n");
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
