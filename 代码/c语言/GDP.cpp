# include <stdio.h>
# include <math.h>
int main()
{
	float a,n;
	a=1.13*(1+0.07);
	printf("����������(n<=5):\n");
	scanf("%f",&n);
	printf("202%1.0f���˾�GDP=%f(����Ԫ)",n,pow(a,n));
	return 0;
}
