#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,m;
        cin>>l>>r>>m;
        ll a=l,b=l,c=l,rx,n;
        ll rpn=0,rp=0,rr=r-l;
        ll nn=0,rn=0,d,dd;
        n=m/a;
        rx=m%a;
        rp=(n+1)*a-m;
        d=min(rx,rp);
        for(ll i=l+1;i<=r;i++)
        {
            nn=m/i;
            rn=m%i;
            rpn=(nn+1)*i-m;
            dd=min(rn,rpn);
            //cout<<dd<<endl;
            if(dd<d)
            {
                a=i;
                d=dd;
            }
        }
        b+=d;
        if(a>m)
            swap(b,c);
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
