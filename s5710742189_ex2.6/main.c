#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("please enter base 10 number: ");
    scanf("%d",&a);
    printf("please select output base [8 or 16]: ");
    scanf("%d",&b);

    if( b == 8){
        printf("Base 8 Of a is %o",a);
    }
    else if(b == 16){
        printf("Base 16 Of a is %x",a);
    }
    return 0;
}
