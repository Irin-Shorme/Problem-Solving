#include<stdio.h>
int main()
{
    float count=0,a,b;

    scanf("%f %f",&a,&b);
while(1)
{
 a=a/b;
 if(a<=1)
 {
		break;
}
		count++;
}
printf("%.0f\n",count);
}
