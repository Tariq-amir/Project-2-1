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
        ll n;
        cin>>n;
        if(n<31)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll a,b,c,d;
        a=2*3;
        b=2*5;
        c=2*7;
        d=n-(a+b+c);
        if(d==c||d==b||d==a)
        {
            c=3*5;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            if(a+b+c>=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            d=n-(a+b+c);
        }
        if(d==c||d==b||d==a)
        {
            c=3*7;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            if(a+b+c>=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            d=n-(a+b+c);
        }
        if(d==c||d==b||d==a)
        {
            c=2*11;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            if(a+b+c>=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            d=n-(a+b+c);
        }
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
}
