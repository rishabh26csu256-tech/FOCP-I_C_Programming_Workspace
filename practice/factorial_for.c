#include<stdio.h>

int main(){
    int product=1;
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        product*=i;
    }
    printf("factorial of %d: %d",n,product);
    return 0;
}