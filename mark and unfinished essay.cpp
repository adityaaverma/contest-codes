#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l,n,q;cin>>l>>n>>q;
    string s;
    cin>>s;
    s='#'+s;
    
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        s=s+s.substr(x,y-x+1);
    }
    while(q--)
    {
        int x;cin>>x;
        cout<<s[x]<<endl;
    }
    return;
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
