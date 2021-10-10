#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l1,l3,i,count=0;
    char s1[101],s2[101],s3[101];
    scanf("%s %s %s",&s1,&s2,&s3);
    strcat(s1,s2);
    l1=strlen(s1);
    l3=strlen(s3);
    sort(s1,s1+l1);
    sort(s3,s3+l3);
    if(l1!=l3)
    {
        printf("NO");
    }
    else
    {
        for(i=0;i<l1;i++)
        {
            if(s1[i]==s3[i])
            {
                count++;
            }
        }

        if(count==l1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }

        return 0;
    }
}


