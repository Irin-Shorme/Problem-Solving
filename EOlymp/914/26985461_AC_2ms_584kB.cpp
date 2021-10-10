#include<stdio.h>
#include<math.h>
int main(){
    float a[100],n,arr[100],max;
    int i;
    scanf("%f",&n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
            arr[i]=fabs(a[i]);

    }
    max=arr[0];
     for(i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
     }
     printf("%.2f",max);





}