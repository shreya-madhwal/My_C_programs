#include <stdio.h>
int rev(int n);
int main()
{
    int n;
    printf("enter last number: ");
    scanf("%d",&n);
    printf("reverse sequense is: ");
      rev(n);
    return 0;
}int rev(int n){
    if(n==0){
        return 0;
    }else{
        printf("%d ",n);
        rev(n-1);
      
    }
}
