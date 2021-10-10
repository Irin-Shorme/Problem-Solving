#include<stdio.h>
int main()
{
    int a,b,c,d,i,mul,sum=0,r;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
            mul=i*a;
    sum+=mul;
    }
    if(sum>b){
          r=sum-b;
        printf("%d\n",r);
    }
    else{
        printf("0\n");
    }
}
