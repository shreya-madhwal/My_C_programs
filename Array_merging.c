#include <stdio.h>
#define max 50
read_array(int *x, int n)
{
    for(int i=0; i<n ; i++){
        scanf("%d",&x[i]);
    }
}
print_array(int *x, int n)
{
    for(int i=0; i<n ; i++){
        printf("%d ",x[i]);
    }
}
merge_arrays(int *x, int *y, int *c,int n, int o)
{
    int i,j=0;
    for( i=0 ;i<n ; i++){
        c[i]=x[i];
    }for(i=n ; i<o ; i++){
        c[i]=y[j];
        ++j;
    }
        
    
}
int main()
{
    int a[max]; int b[max]; int m;int n;
    int c[max];int o;
    printf("Enter limit of array a: ");
    scanf("%d",&n);
    printf("Enter limit of array b: ");
    scanf("%d",&m);
    printf("Enter elements of array a: ");
    read_array(a,n);
    printf("Enter elements of array b: ");
    read_array(b,m);
    o=m+n;
    merge_arrays(a,b,c,n,o);
    printf("Merged array is ");
    print_array(c,o);

    return 0;
}
