#include<stdio.h>
int main()
{
    int x,n,i,head=0,tail=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&x);
    if(x==1){
            head++;

    }
    if(x==0){
        tail++;
    }
    }
    if(head>tail){
        printf("%d\n",tail);
    }
    else if(head<tail){
        printf("%d\n",head);
    }
    return 0;
}