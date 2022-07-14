#include <bits/stdc++.h>
using namespace std;
void helper(int ans[],int j,pair<int,string>p,int a[])
{
    string s=p.second;
    int now=a[j];
    for(int i=p.first-1;i>=0;i--)
    {
        if(now==9 and s[i]=='D')now=0;
        else if(now==0 and s[i]=='U')now=9;
        else if(s[i]=='U')now-=1;
        else now+=1;
    }
    ans[j]=now;
}
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<pair<int,string>> v;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        string s;cin>>s;
        v.push_back({x,s});
        helper(ans,i,v[i],a);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
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
