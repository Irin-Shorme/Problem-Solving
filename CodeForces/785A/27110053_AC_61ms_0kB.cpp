#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum=0;
    char a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        switch(a[0]){
        case 'T':
            sum+=4;
            break;
        case 'C':
            sum+=6;
            break;
        case 'O':
            sum+=8;
            break;
        case 'D':
            sum+=12;
            break;
        case 'I':
             sum+=20;
             break;

    }
    }
    printf("%d\n",sum);
    return 0;

    }


