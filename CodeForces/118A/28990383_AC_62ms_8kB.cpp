#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
            s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){

        continue;
        }

        else{
            cout<<"."<<s[i];
        }
    }
}

