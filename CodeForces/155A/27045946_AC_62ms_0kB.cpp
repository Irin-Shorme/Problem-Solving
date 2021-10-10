#include<stdio.h>
int main()
{
    int n,a[1000],max,min,count1=0,count2=0,i;
    scanf("%d",&n);
            for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     max=a[0];
     min=a[0];
      for(i=1;i<n;i++){

        if(max>a[i]){
            max=a[i];
            count1++;
        }
       if(min<a[i]){
           min=a[i];
            count2++;
        }

        }
            printf("%d",count1+count2);


    }
