#include <stdio.h>
#include <math.h>
int main()
{
	printf("请输入要执行的操作\n");
	printf("A:加法\nB:减法\nC:乘法\nD:除法\nE:幂运算\nF:开方:\nG:取余\n");
	char x1;
	scanf("%c",&x1);
	double x2,x3;
	printf("请输入两个数字\n");
	scanf("%lf%lf",&x2,&x3);
	switch(x1)
	{
	case'a':
	case'A':printf("%5.2lf\n",x2+x3);break;
	case'b':
	case'B':printf("%5.2lf\n",x2-x3);break;
	case'c':
	case'C':printf("%5.2lf\n",x2*x3);break;
	case'd':
	case'D':printf("%5.2lf\n",x2/x3);break;
	case'e':
	case'E':printf("%5.2lf\n",pow(x2,x3));break;
	case'f':
	case'F':printf("%5.2lf\n%5.2lf\n",sqrt(x2),sqrt(x3));break;
	case'g':
	case'G':printf("%5.2d\n",(int)x2%(int)x3);break;
	}
	return 0;
}



