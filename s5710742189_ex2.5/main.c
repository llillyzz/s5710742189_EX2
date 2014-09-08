#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;

    printf("Enter Number : \n");
    scanf("%d %d",&a,&b);
    c = a-b;
    d = b-a;

    if(a > b){
        printf("Absolute Of a-b = %d",c);
    }
    if(a < b){
        printf("Absolute Of a-b = %d",d);
    }



    return 0;
}

