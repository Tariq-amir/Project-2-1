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
#define mod 1000000007LL
#define mxn 400005


vector<ll>vis(mxn);
vector<ll>v[mxn];

ll bigmod(ll a,ll b)
{
    if(b==0)
        return 1%mod;
    ll x = bigmod(a,b/2);
    x=(x*x)%mod;
    if(b%2)
        x=(x*a)%mod;
    return x;
}


void dfs(int node)
{
    vis[node]=1;
    for(auto u:v[node])
    {
        if(!vis[u])
            dfs(u);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;


        for0(i,n+5)
        {
            vis[i]=0;
            v[i].clear();
        }

        ll a[n+2];
        for0(i,n)
        {
            cin>>a[i];
        }
        for0(i,n)
        {
            ll x;
            cin>>x;
            v[a[i]].pb(x);
            v[x].pb(a[i]);
        }
        ll cnt=0;
        for1(i,n)
        {
            if(!vis[i])
            {
                dfs(i);
                cnt++;
            }
        }
        cout<<bigmod(2LL,cnt)<<endl;
    }
}


