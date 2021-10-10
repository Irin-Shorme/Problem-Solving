#include<bits/stdc++.h>
using namespace std;
int main()
{


    char a[10000],s[1000];
    int i,c=0;
    gets(a);
    int len =strlen(a);
    for(i=0;i<=len;i++){
        if(a[i]!='+'){
            s[c]=a[i];
            c++;
        }
}
        int f=strlen(s);
        sort(s,s+f);
        s[c]='\0';

        for(i=0;i<f;i++){

                if(i!=(f-1)){
                printf("%c+",s[i]);
            }
            else{
                printf("%c",s[i]);
            }
        }

}
