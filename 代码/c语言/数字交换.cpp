#include <stdio.h>
int main()
{
	int a,b;
	void swap(int x,int y);
	printf("�뽻��ǰ������.\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("�������������Ϊ:\n");
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
