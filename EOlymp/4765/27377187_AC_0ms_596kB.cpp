#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,a[1000];
    scanf("%d",&n);
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i =0;i<n;i++){
            if(a[i]!=a[i+1])
      printf("%d ",a[i]);
    }
}
