#include <stdio.h>
int main()
{
    int i=5;
    void palin(int n);
    printf("请输入5个字符\40:\40");
    palin(i);
    printf("\n");
}
void palin (int n)
{
	
    char next;
    if(n<=1) 
	{
        next=getchar();
        printf("相反顺序输出结果\40:\40");
        putchar(next);
    } 
	else 
	{
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}
