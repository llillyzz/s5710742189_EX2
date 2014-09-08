#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("please enter midterm(max=40) and final(max=60)\n");
    scanf("%d %d",&a,&b);

    c = a+b ;
     if(a>=20 && b>=30 && c>=50){
        printf("PASS // Score = %d",c);
     }
     else if(a<20 && b>30 && c>=60){
        printf("PASS // Score = %d",c);
     }
     else if(a>20 && b<30 && c>=60){
        printf("PASS // Score = %d",c);
     }
     else if(a>20 && b<30 && c<60){
        printf("FAILD // Score = %d",c);
     }
     else if(a<20 && b>30 && c<60){
        printf("FAILD // Score = %d",c);
     }
     else if(a<20 && b<30){
        printf("FAILD // Score = %d",c);
     }

    return 0;
}
