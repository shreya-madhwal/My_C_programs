#define max 50
#include <stdio.h>
read_array(int *x, int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
}
sort_array(int *x, int n)
{
    int t;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(x[j]>x[j+1])
            {
             t=x[j];
             x[j]=x[j+1];
             x[j+1]=t;
            }
            else
            {
             continue;
            }
        }
    }
}
print_array(int *x, int n){

    for(int i=0; i<n; i++)
    {
    printf("%d ",x[i]);
    }
}
int main()
{
    int a[max],n,i=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    read_array(a,n);
    sort_array(a,n);
    printf("Sorted array is: ");
    print_array(a,n);

    return 0;
}
