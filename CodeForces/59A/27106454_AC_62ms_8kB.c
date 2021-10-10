#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],count1=0,count2=0;
    int i;
    gets(ch);
    for(i=0;i<strlen(ch);i++){
        if(ch[i]>='a'&&ch[i]<='z'){
            count1++;
        }
        else if(ch[i]>='A'&&ch[i]<='Z'){
            count2++;
        }
    }
    for(i=0;i<strlen(ch);i++){
            if(count1>count2){
                printf("%c",tolower(ch[i]));
            }
            else if(count1<count2){
                printf("%c",toupper(ch[i]));
            }
            else{
                   printf("%c",tolower(ch[i]));

            }
}
}
