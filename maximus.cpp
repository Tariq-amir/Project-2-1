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
    ll b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    ll x=0;
    for(int i=0;i<n;i++)
    {
        b[i]+=x;
        x=max(x,b[i]);
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
