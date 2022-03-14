# include <stdio.h>
int main ()
{
int max(int x,int y,int z);
int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
d=max(a,b,c);
printf("max=%d\n",d);
return 0;
}
 int max(int x,int y,int z)
 {int m;
 if(x>y)m=x;
 else m=y;
 if(m>z)m=y;
 else m=z;
 return(m);
 
 }
