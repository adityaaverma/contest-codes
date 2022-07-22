#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=max(a[i],b[i]);
    }
    int ans=0;
    sort(c,c+n);
    for(int i=0;i<n;i++)
    {
        if(c[i]-ans>1)
        {
            cout<<ans+1<<endl;
            return 0;
        }
        ans=c[i];
    }
    
}