#include <stdio.h>
int main()
{  
	int max(int x,int y); 
    int a[10],m,n,i;
    printf("10 integer numbers:\n");
    for(i=0;i<10;i++) 
       scanf("%d",&a[i]);
    printf("\n");
       for(i=1,m=a[0],n=0;i<10;i++)
   { 
    if (max(m,a[i])>m) 
	    {  m=max(m,a[i]); 
	       n=i; 
		}
    }
    printf("largest number is %d\n",m);
    printf("%dth number.\n",n+1);
}

int max(int x,int y) 
{  
	return(x>y?x:y);  
}

