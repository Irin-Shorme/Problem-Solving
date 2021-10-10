#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(isupper(s[i])){
            c++;
        }
    }
    cout<<c+1<<endl;
}
