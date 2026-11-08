#include<stdio.h>

int main(){
    char a[20];
    int b;
    float c;
    char d;
    printf("Enter Name:");
    scanf("%c",&a);

    printf("Enter Age:");
    scanf("%d",&b);

    printf("Enter Height:");
    scanf("%f",&c);

    printf("Enter Grade:");
    scanf(" %c",&d);

    printf("----Student Profile----\n");
    printf("Name:%c\n",a);
    printf("Age:%d\n",b);
    printf("Height:%f\n",c);
    printf("Grade:%c",d);

    return 0;
}