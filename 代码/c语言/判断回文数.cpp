#include <stdio.h>
 int main( )
{
    long ge,shi,qian,wan,x;
    printf("请输入 5 位数字：\n");
    scanf("%ld",&x);
    wan=x/10000;       
    qian=x%10000/1000; 
    shi=x%100/10;       
    ge=x%10;           
    if (ge==wan&&shi==qian)
	{ 
        printf("这是回文数\n");
    } 
	else 
	{
        printf("这不是回文数\n");
    }
}
