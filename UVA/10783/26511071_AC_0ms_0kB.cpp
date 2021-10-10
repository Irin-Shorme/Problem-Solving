#include <stdio.h>
int main() {
    int n,a,b,t,sum=0,i;
    scanf("%d",&n);
    for(t=1;t<=n;t++){
    scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++){
            if(i%2==1){
               sum+=i;
            }

        }  printf("Case %d: %d\n",t,sum);
        sum=0;
}


    return 0;
}
