#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	 switch(a)
	 {
	  case'Z':
      a=65;
      break;
      case'z':
      a=97;
      break;
      default:
      a=a+1;  
      }
	
	printf("%c\n",a);
	printf("%d\n",a);
	return 0;
	
	
	
}
