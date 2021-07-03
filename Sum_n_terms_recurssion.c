#include <stdio.h>
int sum(int n);
int main()
{
    int n,res;
    printf("Enter last term: ");
    scanf("%d",&n);
    res=sum(n);
    printf("Sum of series is: %d",res);

    return 0;
}int sum(int n){
    if(n==1){
    return 1;
    }else{
        return n+sum(n-1);
    }
}
