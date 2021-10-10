#include<stdio.h>
int main()
{
    int a[100],n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("%d ",a[n-1]);
     for(i=0;i<n-1;i++){
       printf("%d ",a[i]);

    }



}
