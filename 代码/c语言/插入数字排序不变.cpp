#include<stdio.h>
int main()
{
    int a[11]={1,3,5,7,9,11,13,15,17,19};
    int temp1,temp2,number,end,i,j;
    printf("原始数组是:\n");
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
    printf("\n插入一个新的数字: ");
    scanf("%d",&number);
    end=a[9];
    if(number>end)
        a[10]=number;
    else
    {
        for(i=0;i<10;i++)
        {
            if(a[i]>number)
            {
                temp1=a[i];
                a[i]=number;
                for(j=i+1;j<11;j++)
                {
                    temp2=a[j];
                    a[j]=temp1;
                    temp1=temp2;
                }
                break;
            }
        }
    }
    for(i=0;i<11;i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
}
