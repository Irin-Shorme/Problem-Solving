#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i;
    gets(a);
    gets(b);
    for(i=0; i<strlen(a); i++){
    if(a[i]>='A' && a[i]<='B'){
        a[i]=toupper(a[i]);
    }
     if(b[i]>='A'&&b[i]<='B'){
        b[i]=toupper(b[i]);
    }

}
int compare=strcasecmp(a,b);
printf("%d\n",compare);

}