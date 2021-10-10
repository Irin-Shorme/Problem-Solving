#include<stdio.h>
int main()
{
    int a,b,count=1;
    scanf("%d %d",&a,&b);
    while(1){
        a*=3;
        b*=2;
        if(a>b){
            break;
        }
        else{
            count++;
        }
    }
    printf("%d\n",count);
}
