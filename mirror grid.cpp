#include<iostream>
using namespace std;
void solve()
{
    int n;cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int kx[4];
    int ky[4];
    kx[0]=0;ky[0]=0;
    kx[1]=0;ky[1]=n+1;
    kx[2]=n+1;ky[2]=n+1;
    kx[3]=n+1;ky[3]=0;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int px1=i-kx[0];
            int py1=j-ky[0];

            int px2=kx[1]+px1;
            int py2=ky[1]-py1;

            int px3=kx[2]-px1;
            int py3=ky[2]-py1;

            int px4=kx[3]-px1;
            int py4=ky[3]+py1;

            int cnt1=0;int cnt0=0;

            if(a[px1][py1]==0)cnt0++;
            else cnt1++;

            if(a[px2][py2]==0)cnt0++;
            else cnt1++;

            if(a[px3][py3]==0)cnt0++;
            else cnt1++;

            if(a[px4][py4]==0)cnt0++;
            else cnt1++;

            ans+=min(cnt1,cnt0);
        }
        
    }
    cout<<ans/4<<endl;
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