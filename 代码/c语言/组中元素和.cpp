
#include <stdio.h>
 
int main() 
{
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
 
   sum = 0;
   
   for(loop = 9; loop >= 0; loop--) 
   {
      sum = sum + array[loop];      
   }
 
   printf("Ԫ�غ�Ϊ��%d\n", sum);   
 
   return 0;
}

