#include <stdio.h>
int main()
{
	int i,sum=0;
	printf("please enter i,i=?");
	scanf("%d",&i);
	while(i<=10)
	{
		sum=sum+1;
		i++;
		
	}
	printf("sum=%d\n",sum);
	return 0;
}

