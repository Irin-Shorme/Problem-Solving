#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
   while(a!=1)
    {
        if(a%2==0){
            c++;
            a=a/2;
        }
        else{
            a+=1;
            c++;
        }
    }
    printf("%d\n",c);

}
