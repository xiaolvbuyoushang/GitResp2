#include <isotream>
#include <stdio.h>
int main()
{
    int i,j,result;
    printf("\n");
    for (i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            result=i*j;
            printf("%d*%d=%-3d",i,j,result); 
        }
    printf("\n"); 
    }
}
