#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,one = 0, zero = 0;
    cin >> n;
    char a[n];
    cin >> a;
    for(int i = 0; i<strlen(a); i++) {
        if(a[i] == 'r')
            ++zero;
        else if(a[i] == 'n')
            ++one;
    }
    while(one--)
        cout << "1 ";
    while(zero--)
     cout << "0 ";
}
