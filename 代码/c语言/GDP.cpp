# include <stdio.h>
# include <math.h>
int main()
{
	float a,n;
	a=1.13*(1+0.07);
	printf("请输入年数(n<=5):\n");
	scanf("%f",&n);
	printf("202%1.0f年人均GDP=%f(万美元)",n,pow(a,n));
	return 0;
}
