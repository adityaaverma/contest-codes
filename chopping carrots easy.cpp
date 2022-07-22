#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[3000];
void solve()
{
    int n,k;cin>>n>>k;
    int ans=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int v=0;v<=a[1];v++)
    {
        int x=v;
        for(int i=1;i<=n;i++)
        {
            int p=min(k,(v?(a[i]/v):k));
            x=max(x,a[i]/p);
        }
        ans=min(ans,x-v);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}