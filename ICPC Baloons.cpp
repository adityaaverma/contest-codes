#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    bool vis[26]={};
    int ans=0;
    for(char c:s)
    {
        if(!vis[c-'A'])
        {
            ans+=2;
            vis[c-'A']=1;
        }
        else ans+=1;
    }
    cout<<ans<<endl;

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