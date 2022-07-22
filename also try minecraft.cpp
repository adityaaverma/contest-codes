#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int  n,m;    cin>>n>>m;
    ll a[n+1],s[n+1],t[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<=n;i++)s[i]=s[i-1]+max(0ll,a[i-1]-a[i]);
    for(int i=n-1;i;i--)t[i]=t[i+1]+max(0ll,a[i+1]-a[i]);
    while(m--)
    {
        ll l,r;
        cin>>l>>r;
        if(l<r)cout<<s[r]-s[l]<<endl;
        else cout<<t[r]-t[l]<<endl;
    }
    return 0;
}