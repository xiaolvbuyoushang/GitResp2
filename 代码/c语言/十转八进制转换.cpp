
#include <stdio.h>
#include <math.h>
 
int convertDecimalToOctal(int decimalNumber);
int main()
{
    int decimalNumber;
 
    printf("����һ��ʮ������: \n");
    scanf("%d", &decimalNumber);
 
    printf("ʮ������ %d ת��Ϊ�˽���Ϊ %d", decimalNumber, convertDecimalToOctal(decimalNumber));
 
    return 0;
}
 
int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;
 
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
 
    return octalNumber;
}

