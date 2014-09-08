#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter Your Score :");
    scanf("%d",&a);

    if(a>=80){
        printf("Grade A!!");
    }
    else if(a>=70 && a<=79){
        printf("Grade B");
    }
    else if(a>=60 && a<=69){
        printf("Grade C");
    }
    else if(a>=50 && a<=59){
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }
    return 0;
}
