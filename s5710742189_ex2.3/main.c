#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;


    printf("Enter Number : ");
    scanf("%d",&a);

    if(a > 40 && a <= 100){
        printf("True");
    }
    else {
        printf("false");
    }
    return 0;
}
