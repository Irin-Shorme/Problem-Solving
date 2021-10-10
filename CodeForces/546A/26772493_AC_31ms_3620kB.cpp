#include<stdio.h>
int main()
{
    int a,b,c,mul,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1;i<=c;i++){
        int p=a*i;
        sum+=p;
    }


    if(b>sum){
        printf("0\n");
    }
    else{
            int mul=sum-b;
        printf("%d\n",mul);
    }

}
