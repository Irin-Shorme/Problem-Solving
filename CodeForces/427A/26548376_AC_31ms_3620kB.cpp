#include<stdio.h>
int main()
{
    int n,casee,count=0,i,unsol=0;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&casee);
        if(casee>0)
        {
            count+=casee;
        }
        else if(casee<0)
        {
            if(count>0)
            {
                count--;
            }
            else
            {
                unsol++;
            }
        }

    }
    printf("%d\n",unsol);
    return 0;


}
