#include<stdio.h>

int main(){
    int n;
    int prime=0;
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
        prime=1;}
        break;
    }
    if(prime)
    {
        printf("It is not a prime");
    
    }
    else{
        printf("It is a prime");
    }
    
    

    return 0;
}