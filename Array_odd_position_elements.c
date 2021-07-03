#include <stdio.h>
#define max 50
read_array(int *x, int n){
    for(int i=0; i<n ; ++i){
        scanf("%d",&x[i]);
    }
}
odd_position_array(int *x, int n){
     for(int i=0; i<n ; ++i){
      if(i%2==0){
          printf("%d ",x[i]);
      }
    }
}

int main()
{
    int a[max];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    read_array(a,n);
    printf("Elements in odd positions are: ");
    odd_position_array(a,n);
    
    return 0;
}
