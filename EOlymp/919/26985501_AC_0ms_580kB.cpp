#include<stdio.h>
#include<math.h>
int main(){
    float a[100],n,arr[100],count=0,sum=0;
    int i;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        scanf("%f",&a[i]);

    }
     for(i=1;i<=n;i++){
        if(i%3==0){
          if(a[i]>0){
                count++;
            sum+=a[i];
          }
        }
     }
     printf("%.0f %.2f\n",count,sum);


}
