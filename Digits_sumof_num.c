#include <stdio.h>
int s=0,d=0;
int sum(int n){
    if(n==0){
        return s;
    }else{
        d=n%10;
        s=s+d;
        n=n/10;
        sum(n);
    }
}
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("sum is :%d",sum(n));
}
