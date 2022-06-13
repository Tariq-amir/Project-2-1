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
        ll q,d;
        cin>>q>>d;
        ll a[q+2],f=0;
        for0(i,q)
        {
            cin>>a[i];
            f=0;
            if(a[i]%d==0||a[i]>=d*10)
                f=1;
            else
            {
                ll x,y,z=1;
                x=a[i]/d;
                y=a[i]%d;
                //cout<<x<<" "<<y<<endl;
                while(z<x)
                {
                    if((z*d+y)%10==0)
                        f=1;
                    z++;
                }
            }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }


    }
}


