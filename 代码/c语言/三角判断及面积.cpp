# include <stdio.h> 
# include <math.h>
int main()
{
	double a,b,c,s,area;
	printf("�����������������ߣ�\n");
	scanf("%Lf,%Lf,%Lf",&a,&b,&c);
	if(a+b<=c)
	printf("�޷�����������"); 
	else
		if(a+c<=b)
		printf("�޷�����������");
		else
			if(b+c<=a)
			printf("�޷�����������");
			else
				{
				s=(a+b+c)/2;
				area=sqrt(s*(s-a)*(s-b)*(s-c));
				printf("a=%Lf\tb=%Lf\tc=%Lf\t",a,b,c);
				printf("area=%f\n",area);	
				}
	return 0;				
}



