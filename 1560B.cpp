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
        ll a,b,c;
        cin>>a>>b>>c;
        ll range,d;
        ll dif=abs(a-b);
        range=2*dif;
        ll ans=-1;
        if(a<=range&&b<=range&&c<=range)
        {
            if(c-dif>0&&a!=c-dif&&b!=c-dif)
            {
                ans=c-dif;
            }
           else if(c+dif<=range&&a!=c+dif&&b!=c+dif)
            {
                ans=c+dif;
            }
        }
        cout<<ans<<endl;
    }
}


