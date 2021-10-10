#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int c=0;
    string s;
    while(a--){
        cin>>s;
        int len=s.size();
        if(len<=10){
            cout<<s<<"\n";

        }
        else{
            for(int i=0;i<len;i++){
                if(i!=0&&i!=len-1)
                   c++;

        }
        cout<<s[0]<<c<<s[len-1]<<endl;
    }
    c=0;
}
}
