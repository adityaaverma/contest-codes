#include <iostream>
using namespace std;
int main() 
{
    string s;cin>>s;
    int n=s.size();
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxprice=-1;
    bool prev=false;
    int i=1;
    int ans=0;
    while(i<n)
    {
        if(s[i]!=s[i-1])
        {
            i++;
            prev=false;
            maxprice=-1;
        }
        else 
        {
            if(prev)
            {
                ans+=min(maxprice,a[i]);
                maxprice=max(maxprice,a[i]);
            }
            else
            {
                ans+=min(a[i],a[i-1]);
                maxprice=max(a[i],a[i-1]);
                prev=1;
            }
            i++;
        }
    }
    cout<<ans<<endl;
}
