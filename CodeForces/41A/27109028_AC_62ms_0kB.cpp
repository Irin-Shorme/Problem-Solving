#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],t[1000];
    int i,j,l,count=0;
    scanf("%s %s",&s,&t);
    l=strlen(s);
    j=strlen(t);
    for(i=0,j=l-1;i<l;i++,j--){
            if(s[i]==t[j]){
                    count++;
            }

    }
    if(count==l){

    printf("YES\n");
    }
    else{
             printf("NO\n");

    }
}