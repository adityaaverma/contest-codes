#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char>m;
    int ans=1;
    string s;cin>>s;
    for(auto ch:s)
    {
        if(m.find(ch)!=m.end())
        {
            m.clear();
            ans++;
            m.insert(ch);
        }
        else
        {
            m.insert(ch);
        }
    }
    cout<<ans<<endl;
}