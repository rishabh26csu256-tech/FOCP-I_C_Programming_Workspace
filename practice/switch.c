#include<stdio.h>

int main(){
    int a;
    printf("Enter Number:");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("Number is 1");
            break;
        case 2:
            printf("Number is 2");
            break;
        case 3:
            printf("Number is 3");
            break;
        case 4:
            printf("Number is 4");
            break;
        case 5:
            printf("Number is 5");
            break;
        default:
            printf("Number is not between 1 and 5");
    }
    return 0;
}