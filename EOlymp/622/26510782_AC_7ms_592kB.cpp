#include <stdio.h>
int main() {
    int n, i,count=0;
    scanf("%d",&n);
    for(i=n;i>=1;i/=2){
        if(i%2==1){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
