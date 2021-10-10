#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=1;
    string s1,s2;
    cin>>s1;
    int len=s1.size();
    for(i=0;i<len;i++)
    {
        if(s1[i]==s1[i+1])
        c++;

    }
    s2=s1;
    reverse(s2.begin(),s2.end());
    if(s2!=s1)
        cout<<len<<endl;
    else if(s2==s1&&c!=len){
    cout<<len-1<<endl;
    }
    else if(c==len){
        cout<< 0 <<endl;
    }

}

