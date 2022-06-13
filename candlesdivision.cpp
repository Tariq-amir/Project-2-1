#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,k,sum=0,r=0;
        cin>>n>>k;
        //cout<<k/2<<endl;
        sum=n/k;
        r=n%k;
        if(r<=k/2)
            cout<<sum*k+r<<endl;
        else
            cout<<sum*k+k/2<<endl;
    }
}
