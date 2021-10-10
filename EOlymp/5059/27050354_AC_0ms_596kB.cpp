
#include<stdio.h>
int main()
{
    int n,a[1000],i,min=2000000001,secmin=2000000001;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(min!=a[i] && secmin>a[i])
        {

            secmin=a[i];

        }


    }

    printf("%d %d",min,secmin);



}
