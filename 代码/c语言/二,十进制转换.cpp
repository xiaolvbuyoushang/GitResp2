#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long n); 
int main()
{
    long long n;
    printf("����һ����������: \n");
    scanf("%lld", &n);
    printf("�������� %lld ת��Ϊʮ����Ϊ %d", n, convertBinaryToDecimal(n));
    return 0;
}
 
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

