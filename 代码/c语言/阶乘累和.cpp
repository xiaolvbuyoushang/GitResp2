#include <stdio.h>
int main()
{
    int i;
    double sum,mix;
    sum=0,mix=1;
    for(i=1;i<=20;i++)
    {
        mix=mix*i;
        sum=sum+mix;
    }  
    printf("%7.2f\n",sum);  
}
