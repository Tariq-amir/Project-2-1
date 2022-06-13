#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define limit 100005
#define lol (ll) sqrt((double)limit)
#define pb push_back
#define sci(x) scanf("%d",&x)
#define scl(y) scanf("%lld",&y)
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n],f=0,l=-1,r=-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
        mp[b[i]]=i;
    for(int i=0;i<n;i++)
        a[i]=mp[a[i]];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i)
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=i)
        {
            r=i;
            break;
        }
    }
    //cout<<l<<" "<<r<<endl;
    if(r==-1||l==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        reverse(a+l,(a+r+1));
        /*for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;*/
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i)
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"no"<<endl;
        else
        {
                cout<<"yes"<<endl;
                cout<<l+1<<" "<<r+1<<endl;
        }
    }


}
