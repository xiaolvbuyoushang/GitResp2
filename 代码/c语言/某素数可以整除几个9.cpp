#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,i;
    long int sum=9;
    printf("������һ������:\n");
    scanf("%d",&p);
    for(i=1;;i++)
        if(sum%p==0)break;
        else sum=sum*10+9;
    
    printf("����%d������%d��9��ɵ���%ld\n",p,i,sum);
    return 0;
}
