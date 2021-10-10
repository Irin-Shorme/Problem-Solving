#include<stdio.h>
#include<math.h>
int main()
{
   int a;
   scanf("%d",&a);
   if(a>2){
    if(a%2==0)
        printf("YES\n");
    else{
        printf("NO\n");
    }
   }
   else{
    printf("NO\n");
   }
}
