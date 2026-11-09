#include<stdio.h>

int main(){
int age;
float height;
char grade;
printf("Enter Age: ");
scanf("%d",&age);

printf("Enter Height(in meters): ");
scanf("%f",&height);

printf("Enter grade(single character): ");
scanf(" %c",&grade);

printf("Entered Details\n");
printf("------------------\n");
printf("Age   :%d\n",age);
printf("Height:%.2f\n",height);
printf("Grade :%c\n",grade);
    return 0;
}