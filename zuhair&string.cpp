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
    ll k,n;
    string s;
    cin>>n>>k>>s;
    k;
    map<char,ll>m;
    ll cnt=0;
    for0(i,n-1)
    {
        //cout<<cnt<<endl;
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            if(cnt+1>=k)
                m[s[i]]+=(cnt+1)/k;
            cnt=0;
        }
    }
    if(cnt+1>=k)
        m[s[n-1]]+=(cnt+1)/k;
    ll mx=0;
    for(auto u:m)
    {
        mx=max(mx,u.second);
    }
    cout<<mx<<endl;
}
