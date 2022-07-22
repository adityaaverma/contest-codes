#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll a[100000];
ll get(int i)
{
    return max(0ll,max(a[i+1],a[i-1])-a[i]+1);
}
void solve()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    if(n&1)
    {
        ll ans=0;
        for(int i=2;i<=n-1;i+=2)
        {
            ans+=get(i);
        }
        cout<<ans<<endl;
        return;
    }
    else
    {
        ll ans=0;
        for(int i=2;i<=n-1;i+=2)
        {
            ans+=get(i);
        }
        ll main=ans;
        for(int i=n-1;i>=2;i-=2)
        {
            ans-=get(i-1);
            ans+=get(i);
            main=min(main,ans);
        }
        cout<<main<<endl;
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}