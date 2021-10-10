#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,count=0,len;
    scanf("%d",&n);

    char s[n];
    scanf("%s",&s);

    for(i=0;i<n;i++)
   {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=tolower(s[i]);

        }
    }

    sort(s,s+n);
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count==26){
        printf("YES");
    }
    else{
    printf("NO");
}

}