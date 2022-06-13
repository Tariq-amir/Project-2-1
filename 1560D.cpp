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

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<60;i++)
    {
        ll x=(ll)pow(2,i);
        v.pb(x);
    }
    ll len=v.size();
    ll ans=1e15,mn;

    string s=to_string(n);
    ll s_len=s.size();

    for0(i,len)
    {
        string t=to_string(v[i]);
        ll t_len=t.size();
        ll k=0,cnt=0;
        for(ll j=0;j<s_len;j++)
        {
            if(s[j]==t[k]&&k<t_len)
            {
                cnt++;
                k++;
            }
        }
        mn=s_len+t_len-2*cnt;
        ans=min(mn,ans);
    }
    cout<<ans<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin>>t;
	while(t--)
    {
        solve();
    }
}


