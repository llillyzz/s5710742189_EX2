#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter Number : \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c && b<c){
        printf("%d > %d > %d",c,b,a);
    }

    else if (b<a && b<c && a<c){
        printf("%d > %d > %d",c,a,b);
    }
    else if (c<a && c<b && b<a){
        printf("%d > %d > %d",a,b,c);
    }
    else if (b<a && b<c && c<a){
        printf("%d > %d > %d",a,c,b);
    }
    else if (a<b && c<b && c<a){
        printf("%d > %d > %d",b,a,c);
    }
    else if (a<b && c<b && a<c){
        printf("%d > %d > %d",b,c,a);
    }
    return 0;
}
