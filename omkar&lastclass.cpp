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
#define mod 10000000007
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=mod,b=mod;
        vector<ll>v;
        if(n%2)
        {
            for(ll i=1;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(n/i==i)
                        v.pb(i);
                    else
                    {
                        v.pb(i);
                        v.pb(n/i);
                    }
                }
            }
            sor(v);
            ll temp;
            for0(i,v.size()-1)
            {
                temp=n-v[i];
                if(temp%v[i]==0)
                {
                    b=min(b,temp);
                }
            }
            a=n-b;
        }
        else
        {
            a=n/2;
            b=n/2;
        }
        cout<<a<<" "<<b<<endl;
    }
}
