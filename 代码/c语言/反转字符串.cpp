#include <stdio.h>

void reverse(char* s)
{
   
    int len = 0;
    char* p = s;
    while (*p != 0)
    {
        len++;
        p++;
    }
    
    int i = 0;
    char c;
    while (i <= len / 2 - 1)
    {
        c = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = c;
        i++;
    }
}
 
int main()
{
	char s[100];
	printf("ÇëÊäÈëÒ»´®×Ö·û:\n");
	gets(s);
    printf("%s =>", s);
    reverse(s);           
    printf("%s\n", s);
    return 0;
}
