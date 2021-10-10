#include<stdio.h>
int main()
{
    int a[100],n,i,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
      for(int i=1;i<n;i++){
       if(max<a[i]){
        max=a[i];

       }
      }
       min=a[0];
      for(int i=1;i<n;i++){
       if(min>a[i]){
        min=a[i];

       }

}
printf("%d",max+min);
}
