#include<stdio.h>

int main(){
    int add(int,int);//declaration mandatory
    int main()
    {
     int a,b;
     scanf("%d %d",&a,&b);
     int result=add(a,b);
     printf("%d",result);//function call forward referencing
    
    }



    return a+b;
}