#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter Marks  of 1st Subject:");
    scanf("%d",&a);

    printf("Enter Marks  of 2nd Subject:");
    scanf("%d",&b);

    printf("Enter Marks  of 3rd Subject:");
    scanf("%d",&c);

    printf("Enter Marks  of 4th Subject:");
    scanf("%d",&d);
    
    printf("Enter Marks  of 5th Subject:");
    scanf("%d",&e);

    printf("Total Marks:%d",a+b+c+d+e);
    printf("Percentage:%f",(a+b+c+d+e)/5.0);

    return 0;
}