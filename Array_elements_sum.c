#include <stdio.h>
#define MAX 50
read_array(int *x, int n){
    for(int i=0; i<n ; ++i)
      scanf("%d",&x[i]);
    
}
print_array(int *x, int n){
    for(int i=0; i<n ; ++i)
      printf("%d ",x[i]);
}
sum_array(int *x, int n){
    int s=0;
    for(int i=0; i<=n; ++i){
        s+=i;
    }
    printf("Sum of elements is: %d",s);
}
int main()
{
    int a[MAX];int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    read_array(a,n);
    printf("Array is: ");
    print_array(a,n);
    printf("\n");
    sum_array(a,n);
    return 0;
}
