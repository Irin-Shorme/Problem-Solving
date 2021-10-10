#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000] ,  t[1000];
    int i,a;
    scanf("%d",&a);
    for(i=0 ;i<a; i++){
           
       scanf("%s",&s);
    if(strlen(s)<=10){
        printf("%s\n",s);
       }
       else{
        printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);

       }
    }

}