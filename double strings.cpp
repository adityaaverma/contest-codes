#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    string strs[n];
    unordered_set<string> m;
    for(int i=0;i<n;i++)
    {
        cin>>strs[i];
        m.insert(strs[i]);
    }
    int ans[n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<strs[i].size();j++)
        {
            string s1="",s2="";
           for(int k=0;k<j;k++)
           {
                s1+=strs[i][k];
           }
           for(int k=j;k<strs[i].size();k++)
           {
               s2+=strs[i][k];
           }
           if(m.find(s1)!=m.end() and m.find(s2)!=m.end())
           {
               ans[i]=1;
               break;
           }
        }
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