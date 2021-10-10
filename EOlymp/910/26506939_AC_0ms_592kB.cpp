#include<stdio.h>
int main()
{

    float avg, b,c, a,i,count=0,sum;
    scanf("%f",&a);
    for(i=1;i<=a;i++){

            scanf("%f",&b);
            if(b>0){
        count++;
        sum+=b;

    }

    }
    if(count==0){
                printf("Not Found\n");

        }
        else if(count>0){
        avg=sum/count;
        printf("%.2f\n",avg);

        }
    }

