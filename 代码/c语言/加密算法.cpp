# include <stdio.h>
int main()
{
	char x1,x2,x3,x4,x5;
	printf("请输入5个英文字母：\n"); 
	scanf("%c%c%c%c%c",&x1,&x2,&x3,&x4,&x5);
	switch(x1)
	 {
	  case'Z':
      x1=65;
      break;
      case'z':
      x1=97;
      default:
      x1=x1+1;
     }
	switch(x2)
	  {
	  case'Z':
      x2=65;
      break;
      case'z':
      x2=97;
      break;
      default:
      x2=x2+1;
      }
	switch(x3)
	  {
	  case'Z':
      x3=65;
      break;
      case'z':
      x3=97;
      break;
      default:
      x3=x3+1;
      }
	switch(x4)
	  {
	  case'Z':
      x4=65;
      break;
      case'z':
      x4=97;
      break;
      default:
      x4=x4+1;
      }
	switch(x5)
	  {
	  case'Z':
      x5=65;
      break;
      case'z':
      x5=97;
      break;
      default:
      x5=x5+1;
      }
	printf("你的密文为\n%c%c%c%c%c",x1,x2,x3,x4,x5);
	return 0;	
}








