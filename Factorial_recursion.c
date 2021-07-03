#include <stdio.h>
int fact(int);
int main()
{
    int n,res;
    printf("enter number\t");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial is\t%d",res);
    
    

    return 0;
}
int fact(int n)
{
    if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
