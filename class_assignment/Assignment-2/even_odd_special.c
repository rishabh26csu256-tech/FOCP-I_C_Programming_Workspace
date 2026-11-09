#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    if (n%2==0 && n%5==0)
    {
    printf("Special");
    }
    else if (n%5==0)
    {
        printf("Five");
    }
    else if (n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd/Other");
    }
    return 0;
}