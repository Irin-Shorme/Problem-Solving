#include<stdio.h>
int main()
{
    int n,a[10000],m,j,i,max=-1;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&m);
        for(i=0;i<m;i++){
            scanf("%d",&a[i]);
            if(max<a[i]){
            max=a[i];

        }

        }

         printf("Case %d: %d\n",j+1,max);
         max=-1;
        }

    }


