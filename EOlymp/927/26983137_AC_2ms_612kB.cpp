#include<stdio.h>
int main()
{
    float a[1000],b[10000],n,sum=0;
    int i;

    scanf("%f",&n);
    for(i=0;i<n;i++){
        scanf("%f %f",&a[i],&b[i]);

    }
    for(i=0;i<n;i++){
       if(b[i]<50){
        sum+=a[i];
       }

    }
    printf("%.0f\n",sum);
}
