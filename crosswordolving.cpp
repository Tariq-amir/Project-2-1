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
    ll n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    vector<ll>v1,v2;
    ll sz=0,l=n;
    for0(i,m-n+1)
    {
        v1.clear();
        for0(j,n)
        {
            //cout<<s2[i+j]<<" "<<s1[j]<<endl;
            if(s2[i+j]!=s1[j])
            {
                v1.pb(j+1);
            }
        }
        sz=v1.size();
        //cout<<sz<<endl;
        if(l>=sz)
        {
            v2=v1;
            l=sz;
        }
    }
    cout<<l<<endl;
    for(auto u:v2)
        cout<<u<<" ";
    cout<<endl;
}
