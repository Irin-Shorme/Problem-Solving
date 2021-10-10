#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+1+n);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                if(i==j&&j==k)
                continue;
                if(a[i]==a[j])
                 continue;
                if(a[j]==a[k])
                 continue;
                if(a[i]==a[k])
                 continue;
                if(a[i]+a[j]>a[k]&&a[k]-a[j]<a[i])
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
