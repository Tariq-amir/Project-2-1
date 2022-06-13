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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+2][m+2];
        for0(i,n)
        {
            for0(j,m)
            cin>>a[i][j];
        }
        ll x,y,z,ans=0;

        for0(i,n)
        {
            for0(j,m)
            {
                vector<ll>v;
                x=a[i][j];
                y=a[i][m-j-1];
                z=a[n-i-1][j];

                v.pb(x);
                v.pb(y);
                v.pb(z);
                sor(v);

                ans+=((v[2]-v[1])+(v[1]-v[0]));

                a[i][j]=v[1];
                a[i][m-j-1]=v[1];
                a[n-i-1][j]=v[1];
            }

        }
        cout<<ans<<endl;
    }
}


