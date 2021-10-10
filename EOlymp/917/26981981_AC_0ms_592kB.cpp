#include<stdio.h>
int main()
{
    float a[100],min,n;
    int i;
    scanf("%f",&n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);

    }
    min=a[0];
     for(int i=1;i<n;i++){
    if(min>a[i]){
        min=a[i];
    }

}
printf("%.2f\n",min*2);
}
