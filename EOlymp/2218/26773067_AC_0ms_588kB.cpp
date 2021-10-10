#include<stdio.h>
int main(){
    int a,n,c1=0,c2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1>c2){
        printf("%d\n",c2);
    }
    else{
             printf("%d\n",c1);

    }
}