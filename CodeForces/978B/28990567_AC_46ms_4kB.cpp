#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,count=0;
    cin >> n;
    char a[n];
    cin >> a;
    int len=strlen(a);


	for(i=0;i<len;i++)
    {
        if(i+2<len)
        {
            if(a[i]=='x' && a[i+1]=='x' && a[i+2]=='x')
            {
                count++;
            }
        }
    }

    cout<<count;

	return 0;
}