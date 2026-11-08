#include<stdio.h>

int main(){
    int product=1;
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        product*=i;
        i++;
    }
    printf("factorial of %d: %d",n,product);
    return 0;
}