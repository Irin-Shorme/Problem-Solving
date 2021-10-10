#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,k;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {

       printf("%lld\n",abs(a-b));

    }
    return 0;
}