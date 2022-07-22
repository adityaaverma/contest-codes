#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int key;cin>>key;
    int a[4];
    for(int i=1;i<4;i++)
    {
        cin>>a[i];
    }
    unordered_set<int> s;
    while(key!=0)
    {
        s.insert(key);
        key=a[key];
    }
    if(s.find(1)!=s.end() and s.find(2)!=s.end() and s.find(3)!=s.end())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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