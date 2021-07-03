#include <stdio.h>
#define max 50
int main()
{
    int a[max]; int n,e,p;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element and the position where it need to be added: ");
    scanf("%d\t%d",&e,&p);
    if(p<=n && p>=1)
    {
       for(int j=n; j>=p; j--)
       {
        a[j]=a[j-1];
       }
       a[p-1]=e;
       printf("New array is: ");
       for(int i=0; i<n+1; i++ )
       {
        printf("%d ",a[i]);
       }
    }else{
        printf("Invalid position");
    }
    return 0;
}
