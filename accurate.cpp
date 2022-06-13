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
        string s;
        ll n;
        cin>>n>>s;
        vector<ll>v,v1;
        ll f=-1,g=-1;
        ll cnt1=0,cnt2=0;

        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1'&&f==-1)
            {
                f=i;
            }

            if(s[i]=='0')
                g=i;
        }
        for(ll i=0;i<f;i++)
        {
            cout<<s[i];
        }
        ll z;
        if(f==-1)
            z=0;
        else
            z=max(f,g);
        for(;z<n;z++)
        {
            cout<<s[z];
        }

        cout<<endl;
    }

}
