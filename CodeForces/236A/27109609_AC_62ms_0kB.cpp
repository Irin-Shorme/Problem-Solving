
#include<stdio.h>
#include<string.h>


int main()
{
    char c[10002];
long i,r,a[1000];
 gets(c);
 for(i=0;c[i];i++)
  a[c[i]]=1;
 for(i=0;i<300;i++)
  r+=a[i];
 if(r%2==1){

        printf("IGNORE HIM!\n");
}
else{
    printf("CHAT WITH HER!\n");
}
}
