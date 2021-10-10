#include<stdio.h>
int main()
{
    long long int n,a,b;
    int i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&a,&b);
        if(a>b){
            puts(">");
        }
        else if(a<b){
            puts("<");
        }
        else if(a==b){
            puts("=");
        }

    }
}