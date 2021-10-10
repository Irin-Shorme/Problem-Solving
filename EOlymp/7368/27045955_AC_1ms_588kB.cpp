
#include<stdio.h>
int main()
{
    int n,j,m,i,a[100],max,min,count=0;
    float avg,sum=0,b[100];
    scanf("%d %d",&n,&m);
    for(j=0;j<m;j++){
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
                continue;

         }
         else if(a[i]==min){
                continue;

         }
         else{
            sum+=a[i];
               count++;

         }
     }
      avg=(sum)/count;
      b[j]=avg;
      count=0;
         sum=0;



}
for(j=0;j<m;j++){

         printf("%.2f ",b[j]);

     }
}


