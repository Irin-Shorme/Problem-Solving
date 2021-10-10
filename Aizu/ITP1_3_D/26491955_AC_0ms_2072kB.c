#include<stdio.h>
int main()
{
    int a,b,c,m,count=0,i,div;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++){
        div=c%i;
        if(div==0 && i>=a&& i<=b){
            count++;
        }
    }
    printf("%d\n",count);
}
