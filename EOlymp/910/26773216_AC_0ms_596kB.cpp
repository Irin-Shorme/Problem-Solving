#include<stdio.h>
int main()
{
    int n,count=0;
    float a,sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%f",&a);
        if(a>0){
            count++;
            sum+=a;
        }
    }
    if(count==0){
        printf("Not Found");
    }
    else{
            float avg=sum/count;
            printf("%.2f",avg);

    }
}
