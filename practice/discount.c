#include<stdio.h>

int main(){
   int a;
   printf("enter price:");
   scanf("%d",&a);
   if(a>=5000)
   {a=a-(a*0.1);
    printf("the final price is %d",a);}
    else
    {printf("the final price is %d",a);
    }
    return 0;
}