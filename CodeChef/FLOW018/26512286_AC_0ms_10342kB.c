#include<stdio.h>
int main(){
    int n,i,a,j;
    long long fact = 1;
    scanf("%d",&a);
    for(j=1;j<=a;j++){

    scanf("%d",&n);
    for (i = 1; i <=n; ++i) {
            fact *= i;
        }
        printf("%lld\n",fact);
        fact=1;

}
}
