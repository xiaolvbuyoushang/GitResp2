
#include <stdio.h>
 
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
 
    printf("����һ����ĸ: \n");
    scanf("%c",&c);
 
    
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 
    
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c ��Ԫ��\n", c);
    else
        printf("%c �Ǹ���\n", c);
    return 0;
}

