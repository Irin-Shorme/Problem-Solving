#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,X;
    cin>>N>>X;
    string s;
    cin>>s;
    for(int i=0;i<N ;i++)
    {
        if(s[i]=='o')
            X++;
        else if(s[i]=='x'&&X>0)
            X--;

    }
    if(N<=0)
        cout<< 0 ;
        else
        cout<<X;
        return 0;

}
