#include<stdio.h>

int main(){
    int a;
    printf("Enter Number:");
    scanf("%d",&a);

    if(a>=10 && a<=50){
     printf("Number is between 10 and 50");
    }
    else if(a>50)
    {
        printf("Number is greater than 50");
    }
    else if(a<10)
    {
        printf("Number is less than 10");
    }
    return 0;
}