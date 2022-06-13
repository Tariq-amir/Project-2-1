#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define limit 100005
#define lol (ll) sqrt((double)limit)
#define pb push_back
#define sci(x) scanf("%d",&x)
#define scl(y) scanf("%lld",&y)
int main()
{
    ll n,a,b,c,d,e,f,ans=0;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++)
    {
        d=n-a*i;
        for(int j=0;j<=d;j++)
        {
            e=d-b*j;
            if(e>=0&&e%c==0)
                ans=max(ans,(i+j+e/c));
        }
    }
    cout<<ans<<endl;
}
