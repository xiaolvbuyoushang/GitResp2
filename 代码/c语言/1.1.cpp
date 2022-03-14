#include <stdio.h>
int main() 
{
	int i,j;

	j=20;
	i=++j;
	printf("%d\nw%d\n",i,j);
	j=20;
	i=j++;
	printf("%d\n%d\n",i,j);
}
