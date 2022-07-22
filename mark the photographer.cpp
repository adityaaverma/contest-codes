#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;cin>>n>>x;
    long long h[2*n];
    for(int i=0;i<2*n;i++)
    {
        cin>>h[i];
    }
    sort(h,h+2*n);
    int i=n-1;
    int j=2*n-1;
    while(i>=0 and j>=n)
    {
        if(h[j]-h[i]<x)
        {
            cout<<"NO"<<endl;
            return;
        }
        i--;
        j--;
    }
    cout<<"YES"<<endl;
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
