#include<stdio.h>
int main()
{
    int n,i,a[100],max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     max=a[0];
       min=a[0];
      for(i=1;i<n;i++){

        if(max<a[i]){
            max=a[i];
        }

         if(min>a[i]){
            min=a[i];
        }


    }
     for(i=0;i<n;i++){
         if(a[i]==max){
                printf("%d ",min);

         }
         else{
            printf("%d ",a[i]);
         }

     }
}
