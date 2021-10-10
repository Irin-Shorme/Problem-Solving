
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    char a[n];
     scanf("%s",&a);

    for(i=0;i<n;i++){

         if(a[i]=='A'){
            count1++;
        }
        else{
            count2++;

        }
}
if(count1>count2){
    printf("Anton");
}
else if(count1<count2){
     printf("Danik");
}
else{
    printf("Friendship");
}

}

