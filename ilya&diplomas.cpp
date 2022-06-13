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

	ll n;
	cin>>n;
	ll a[4],b[4],c[4];
	for0(i,3)
	{
	    cin>>a[i]>>b[i];
	}
	ll ans=0,mn=0;
	for0(i,3)
	{
	    ans+=a[i];
	    c[i]=a[i];
	}
	n-=ans;
	for0(i,3)
	{
	    mn=min(n,b[i]-c[i]);
	    c[i]+=mn;
	    n-=mn;
	}
    for0(i,3)
        cout<<c[i]<<" ";
    cout<<endl;
}


