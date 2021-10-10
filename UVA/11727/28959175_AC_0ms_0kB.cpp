#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[1000],i,j;
    cin>>a;
    for(j=1;j<=a;j++){
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    sort(b,b+3);
    cout<<"Case "<<j<<": "<<b[1]<<"\n";
    }
}
