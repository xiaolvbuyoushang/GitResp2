
#include <stdio.h>
 
int main()
{
    int n1, n2, minMultiple;
    printf("��������������: ");
    scanf("%d %d", &n1, &n2);
 
    
    minMultiple = (n1>n2) ? n1 : n2;
 
    
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("%d �� %d ����С������Ϊ %d", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}

