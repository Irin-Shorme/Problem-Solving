#include<stdio.h>
int main()
{
    int n,k,x,m,i,g,d,sum=0;

    scanf("%d %d %d",&n,&k,&m);
    for(i=1;i<n;i++){
        scanf("%d",&x);
        sum+=x;
    }
      d=(n*m)-sum;
      g=(sum+d)/n;



    if(sum>(n*m)){
            printf("0\n");
    }
    else{
        if(d<=k){
        printf("%d\n",d);
        }

         else if(d>=0){
        printf("-1\n");
    }

}
}
