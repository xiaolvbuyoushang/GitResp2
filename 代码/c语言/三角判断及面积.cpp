# include <stdio.h> 
# include <math.h>
int main()
{
	double a,b,c,s,area;
	printf("请输入三角形三条边：\n");
	scanf("%Lf,%Lf,%Lf",&a,&b,&c);
	if(a+b<=c)
	printf("无法构成三角形"); 
	else
		if(a+c<=b)
		printf("无法构成三角形");
		else
			if(b+c<=a)
			printf("无法构成三角形");
			else
				{
				s=(a+b+c)/2;
				area=sqrt(s*(s-a)*(s-b)*(s-c));
				printf("a=%Lf\tb=%Lf\tc=%Lf\t",a,b,c);
				printf("area=%f\n",area);	
				}
	return 0;				
}



