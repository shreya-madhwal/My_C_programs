#include <stdio.h>
#define max 50
read_array(int *x, int n){
    for(int i=0; i<n ; ++i){
        scanf("%d",&x[i]);
    }
}
print_reverse_array(int *x, int n){
    for(int i=n-1; i>=0 ; --i){
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[max]; int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Enter elements:"); 
    read_array(a,n);
    printf("Reversed array is:"); 
    print_reverse_array(a,n);
    return 0;
}

