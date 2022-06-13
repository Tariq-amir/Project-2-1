#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0,s=1,t,h=240,i=1;
    cin>>n>>k;
    t=h-k;
    while(t>=0&&ans<n)
    {
        t-=5*i;
        if(t<0)
            break;
        i++;
        ans++;
       // cout<<t<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}
