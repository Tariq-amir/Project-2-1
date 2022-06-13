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
        ll n;
        cin>>n;
        ll l=sqrt(n);
        ll r=l+1;
        ll dif1=n-l*l;
        ll dif2=r*r-n;
        if(l*l==n)
            cout<<l<<" "<<1<<endl;
        else
        {
            if(dif1<dif2)
        {
            cout<<dif1<<" "<<r<<endl;
        }
        else
        {
            cout<<r<<" "<<1+dif2<<endl;
        }
        }

    }
}


