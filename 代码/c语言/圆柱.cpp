# include <stdio.h>
# include <math.h>
int main()
{
double high,r,s,v;
scanf("%Lf%Lf",&high,&r);
s=3.14*r*r*2+high*3.14*2*r;
v=3.14*r*r*high;
printf("s=%7.2f\nv=%7.2f",s,v);
   return 0;
 } 
 
