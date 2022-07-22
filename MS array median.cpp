#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int x;cin>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int l=1;l<=n;l++)
    {
        float sum=0;
        for(int i=0;i<l;i++)
        {
            sum+=a[i];
        }
        if(x==sum/l)ans++;

        for(int i=l;i<n;i++)
        {
            sum+=a[l];
            sum-=a[i-l];
            if(x==sum/l)ans++;
        }
    }
    cout<<ans<<endl;
}