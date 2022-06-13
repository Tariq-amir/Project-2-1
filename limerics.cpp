#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1)
#define limit 100005
#define lol (ll) sqrt((double)limit)
#define pb push_back
#define sci(x) scanf("%d",&x)
#define scl(y) scanf("%lld",&y)
#define prl(z) printf("%lld",z)
int main()
{
    ll t,ans=0,k;
    scl(t);
    for(ll i=2;;i++)
    {
        if(t%i==0)
        {
            ans=t/i;
            k=i;
            break;

        }
    }
    cout<<k<<ans<<endl;
}
