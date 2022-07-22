#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int l=s.size();
    
    int count=0;
    for(auto ch:s)
    {
        if(ch=='R')
        {
            count++;
        }
    }
    int left=0,right=s.size()-1;
    int ans=0;
    while(left<right)
    {
        if(s[left]=='R' and s[right]=='R')
        {
            count-=2;
            ans=right-left-1-count;
            left++;
            right--;
        }
        else if(s[left]!='R')
        {
            left++;
        }
        else 
        {
            right--;
        }
    }
    cout<<ans<<endl;
}