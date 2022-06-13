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
        ll a,b;
        string s;
        cin>>a>>b>>s;
        ll len=s.size();
        ll l=0,r=0,u=0,d=0;
        for0(i,len)
        {
            if(s[i]=='L')
                l++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='U')
                u++;
            else
                r++;
        }
        ll f=1;
        if(a<0)
        {
            if(l<-(a))
                f=0;
        }
        if(a>0)
        {
            if(r<a)
                f=0;
        }
        if(b<0)
        {
            if(d<-(b))
                f=0;
        }
        if(b>0)
        {
            if(u<b)
                f=0;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}


