#include<stdio.h>
int main()
{
    int n,i,s=0,b;
    scanf("%d",&n);
    float a[n+1],c;
for(i=1;i<=n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]<=2.50)
        {
            b=i;
            s=1;
            c=a[i];
            break;
        }

    }
    if(s==1)
         printf("%d %.2f\n",b,c);
    else
        printf("Not Found\n");

}
