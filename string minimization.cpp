#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string s="";
    for(int i=0;i<m;i++)
    {
        s+='B';
    }
    for(int i=0;i<n;i++)
    {
        int x=a[i]-1;
        int y=m-a[i];
        if(x<y)
        {
            if(s[x]=='A')s[y]='A';
            else s[x]='A';
        }
        else 
        {
            if(s[y]=='A')s[x]='A';
            else s[y]='A';
        }
    }
    cout<<s<<endl;
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