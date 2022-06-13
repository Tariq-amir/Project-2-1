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
        ll n;
        cin>>n;
        ll a[n+2];
        map<ll,ll>m;
        vector<ll>v;
        ll f=0;
        for0(i,n)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                f=1;
            }
            v.pb(a[i]);
        }
        if(f)
            cout<<"NO"<<endl;
        else
        {
            sor(v);
            cout<<"YES"<<endl;
            cout<<v[n-1]+1<<endl;
            for0(i,v[n-1]+1)
            cout<<i<<" ";
            cout<<endl;
        }

    }
}


