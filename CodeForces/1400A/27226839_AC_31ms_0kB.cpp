#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i,n,b,count1=0,count2=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&b);
        scanf("%s",a);

        for(i=0; i<2*b-1; i++)
        {
            if(a[i]=='1')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        int o=1;
        int p=0;
        for(i=0; i<b; i++)
        {
            if(count1>count2)
            {
                printf("%d",o);
            }
            else
            {
                printf("%d",p);

            }
        }
        printf("\n");
			count1=0;
			count2=0;
    }
}