#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        if((360%(180-m)==0))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
