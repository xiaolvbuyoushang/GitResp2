#include <stdio.h>
#include <stdlib.h>
int main(){
    int day, x1 = 0, x2;
    day=9;
    x2=1;
    while(day>0) {
        x1=(x2+1)*2;
        x2=x1;
        day--;
    }
    printf("×ÜÊıÎª %d\n",x1);
    
    return 0;
}
