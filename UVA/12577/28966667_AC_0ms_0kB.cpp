#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i=0,a;
    while(1){
        i++;
        cin>>s;
        if(s=="Hajj"){
            cout<<"Case "<< i<<": Hajj-e-Akbar\n";
        }
       else if(s=="Umrah"){
            cout<<"Case "<< i<<": Hajj-e-Asghar\n";
        }
        else if(s=="*")
            break;
    }
}
