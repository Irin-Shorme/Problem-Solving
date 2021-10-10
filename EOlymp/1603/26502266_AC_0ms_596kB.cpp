#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,num,sum=0;
    scanf("%d",&n);
    n=abs(n);
    for(i=n;i>0;i/=10){
        num=i%10;
        sum+=num;

    }
     printf("%d\n",sum);
    return 0;
}
