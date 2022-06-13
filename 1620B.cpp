#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define si(n) scanf("%d",&n);
#define PI acos(-1.0)
#define sl(n) scanf("%lld",&n);
#define sf(n) scanf("%lf",&n);
#define sc(n) scanf(" %c",n);
#define for0(i,n) for(ll i=0;i<n;i++)
#define for0_(i,n) for(ll i=n-1;i>=0;i--)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define forc(i,j,n) for(ll i=j;i<n;i++)
#define pb push_back
#define sor(n) sort(n.begin(),n.end())
#define sorcmp(n) sort(n.begin(),n.end(),cmp)
#define rev(n) reverse(n.begin(),n.end())
#define pi(x)  printf("%d",x);
#define pl(x)  printf("%lld",x);
#define pf(x)  printf("%.10lf",x);
#define ps(x)  printf("%s",x);
#define el() printf("\n");
#define random_shuffle(r...)random_shuffle(r,[](int _){return rand()%_;})
#define SQR(a) (a)*(a)
#define mod 100000007
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin>>t;
	while(t--)
    {
        ll w,h;
        vector<ll>v1,v2,h1,h2;
        cin>>w>>h;
        ll k1,k2,k3,k4;
        cin>>k1;
        for0(i,k1)
        {
            ll x;
            cin>>x;
            v1.pb(x);
        }
        cin>>k2;
        for0(i,k2)
        {
            ll x;
            cin>>x;
            v2.pb(x);
        }
        cin>>k3;
        for0(i,k3)
        {
            ll x;
            cin>>x;
            h1.pb(x);
        }
        cin>>k4;
        for0(i,k4)
        {
            ll x;
            cin>>x;
            h2.pb(x);
        }
        ll ans=0;
        ans=max(max(abs(v1[0]-v1[k1-1]),abs(v2[0]-v2[k2-1]))*h,ans);
        //cout<<ans<<endl;
        ans=max(max(abs(h1[0]-h1[k3-1]),abs(h2[0]-h2[k4-1]))*w,ans);
        cout<<ans<<endl;
    }

}


