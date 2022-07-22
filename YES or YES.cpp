#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    if(s[0]!='Y' and s[0]!='y')
    {
        cout<<"NO"<<endl;
    }
    else if(s[1]!='E' and s[1]!='e')
    {
        cout<<"NO"<<endl;
    }
    else if(s[2]!='S' and s[2]!='s')
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
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