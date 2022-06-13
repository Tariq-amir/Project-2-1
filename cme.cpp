#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define si(n) scanf("%d",&n);
#define PI acos(-1.0)
#define sl(n) scanf("%lld",&n);
#define sf(n) scanf("%lf",&n);
#define ss(n) scanf("%s",n);
#define for0(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define forc(i,j,n) for(ll i=j;i<n;i++)
#define pb push_back
#define sor(n) sort(n.begin(),n.end())
#define sorcmp(n) sort(n.begin(),n.end(),cmp)
#define rev(n) reverse(n.begin(),n.end())
#define pi(x)  prllf("%d",x);
#define pl(x)  prllf("%lld",x);
#define pf(x)  prllf("%.10lf",x);
#define ps(x)  prllf("%s",x);
#define en() prllf("\n");
#define random_shuffle(r...)random_shuffle(r,[](int _){return rand()%_;})
#define SQR(a) (a)*(a)
#define mod 100000007
int main()
{
    ll q;
    sl(q);
    while(q--)
    {
        ll n,ans;
        sl(n);
        if(n==2)
            ans=2;
        else
            ans=n%2;
        cout<<ans<<endl;
    }
}
