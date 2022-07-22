#include <iostream>
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
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    int i=0,j=0,k=0,ans=0;
    while(i<n and j<n and k<n)
    {
        while(a[i]>b[j])
        {
            j++;
        }
        while(c[k]<b[j])
        {
            k++;
        }
        ans+=n-k;
        i++;
    }
    cout<<ans<<endl;
}
