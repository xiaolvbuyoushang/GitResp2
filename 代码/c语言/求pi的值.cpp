#include <stdio.h>
#include <math.h>
int main()
{
	int sign=1;
	double pi=0.0,n=1.0,term=1.0; 
	while(fabs(term)>=le-6)
		{
		pi=pi+term;
		n=n+2;
		sing=-sign;
		term=sign/n;
		
		}
	pi=pi*4;
	printf("%10.8f\n",pi);
	return 0;
}
