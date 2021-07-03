#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b,res;
    printf("Enter First number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    
    res= sum(a,b);
    printf("sum is %d",res);
    

    return 0;
}
 int sum(int a, int b)
 {
    return a+b; 
 }
