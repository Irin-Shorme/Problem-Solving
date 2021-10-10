#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int length=s.size();
 int i,c=0;
    for(i=0;i<length;i++){
    if(s[i]==s[i+1]){
            continue;
        }else{
            c++;
        }
    }
    if(c%2==0)
        cout<<"CHAT WITH HER!\n";
    else{
        cout<<"IGNORE HIM!\n";
    }



}
