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

	ll n,m;
	cin>>n>>m;
	ll a[n+2],b[n+2];
	for0(i,n)
        cin>>a[i];
    for0(i,m)
        cin>>b[i];
    vector<ll>dif;
    for0(i,n-1)
        dif.pb(a[i+1]-a[i]);
    ll len=dif.size();
    ll ans=dif[0],ans1=0;
    for(ll i=1;i<len;i++)
        ans=__gcd(dif[i],ans);
   for0(i,m)
        if(ans%b[i]==0)
        {
            ans=i+1;
            ans1=a[0];
            break;
        }
    if(ans1)
    {
        cout<<"YES"<<endl;
        cout<<ans1<<" "<<ans<<endl;
    }
    else
        cout<<"NO"<<endl;


}


