# include <stdio.h>
int main()
{
    int sign=1;
	int deno=2.0,sum=0,term;
	while (deno<=100)
	{
	sign=-sign;
	term=sign/deno;
	sum=sum+term;
	deno=deno+1;
	}
	printf ("%f\n",sum);
    return 0;
 } 
 
