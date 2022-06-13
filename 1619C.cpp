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
#define for0_(i,n) for(ll i=n-1;i>=0;i--)
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
	cin.tie(NULL);

	ll t;
	cin>>t;
	while(t--)
    {
        string a,b,s;
        cin>>a>>s;
        ll a_l=a.size();
        ll s_l=s.size();
        ll i = a_l-1,j =s_l-1;
        ll f=0;
        while(i>=0&&j>=0)
        {
            ll ek = a[i]-'0',dui=s[j]-'0';
            if(ek>dui)
            {
                j--;
                dui=(s[j]-'0')*10+dui;
            }
            if(dui-ek>9||ek>dui)
            {
                f=1;
                break;
            }

            b+=to_string(dui-ek);
            //cout<<ek<<" "<<dui<<" "<<b<<endl;
            i--,j--;
        }

        if(i>j)
            f=1;
        else
        {
            while(j>=0)
                b+=s[j],j--;
        }
        reverse(b.begin(),b.end());
        string ans;
        ll ff=0;
        for(auto u:b)
        {
            if (u-'0'!=0)
            {
                ff=1;
            }
            if(ff)
                ans+=u;
        }
        if(f)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
}


