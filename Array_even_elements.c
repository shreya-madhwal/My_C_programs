#include <stdio.h>
#define max 50
read_array(int *x, int n){
    for(int i=0; i<n ; ++i){
        scanf("%d",&x[i]);
    }
}
even_array(int *x, int n){
     for(int i=0; i<n ; ++i){
      if(x[i]%2==0){
          printf("%d ",x[i]);
      }
    }
}

int main()
{
    int a[max];
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    read_array(a,n);
    printf("Even elements are: ");
    even_array(a,n);
    
    return 0;
}
