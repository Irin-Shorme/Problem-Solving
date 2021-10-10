
#include<stdio.h>
#include<string.h>
int main()
{

    int i,n,sum=0,count=0,len;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);

    for(i=0;i<n;i++)
    {
        if(s[i]%2==0){
            sum=sum+i;
            count++;
        }
    }
    printf("%d",sum+count);
}


