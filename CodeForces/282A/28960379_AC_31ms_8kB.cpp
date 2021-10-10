#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x=0;
    string s;
    cin>>a;
    while(a--){
            cin>>s;
        if(s[1]=='+')
            x++;
        else if(s[1]=='-')
            x--;
    }
    cout<<x<<"\n";



}
