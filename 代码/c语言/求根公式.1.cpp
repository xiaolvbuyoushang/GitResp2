# include <stdio.h>
# include <math.h>
int main()
{
	double a,b,c,disc,x1,x2,p,q;
	scanf("%Lf,%Lf,%Lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0)
   	printf("该方程没有实根");
	else
   	    {
    	p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q;
		x2=p-q;
		printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
   	    }
	return 0;
 } 
 
