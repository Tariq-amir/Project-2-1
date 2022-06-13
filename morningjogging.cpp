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
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v[n];
        for0(i,n)
            {
                for0(j,m)
                {
                    ll x;
                    cin>>x;
                    v[i].pb(x);
                }
            }
        priority_queue<pair<ll,ll>>pq;
        ll ans[n][m];
        ll mn[m];
        for0(i,n)
        {
            sor(v[i]);
            if(i==0)
            {
                for0(k,m)
                    ans[i][k]=v[i][k],pq.push({v[i][k],k});
            }
            else
            {
                for0(j,m)
                {
                    ll in=pq.top().second;
                    ll val=pq.top().first;
                    pq.pop();
                    ans[i][in]=v[i][j];
                    mn[in]=min(val,v[i][j]);
                }
                for0(k,m)
                    pq.push({mn[k],k});
            }
        }

        for0(i,n)
        {
            for0(j,m)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }
        //cout<<endl;
    }
}


