#include<stdio.h>
int main()
{
    int N,a[20000],j,c,b,count=0;
    while(scanf("%d",&N)!=EOF){
    for(j=0;j<N;j++){
        scanf("%d",&a[j]);
    }
    scanf("%d %d",&c,&b);
    for(j=0;j<N;j++){
        if(a[j]>=c&&a[j]<=b){
            count++;
        }
    }
    printf("%d\n",count);
   count=0;
}

}
