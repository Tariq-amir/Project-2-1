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
string s;
map<char,ll>mp;
bool bs(ll m)
{
    ll l=s.size();
    for(ll i=0;i<=l-m;i++)
    {
        for(ll j=0;j<m;j++)
        {
            mp[s[i+j]]++;
        }
        if(mp['1']&&mp['2']&&mp['3'])
        {
            return true;
            break;
        }
        else
        {
            if(i!=l-m)
                mp.clear();
        }
    }
    //cout<<mp['1']<<" "<<mp['2']<<" "<<mp['3']<<endl;
    if(mp['1']&&mp['2']&&mp['3'])
        return true;
    else
        return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ll l=s.size();
        for0(i,l)
        {
            mp[s[i]]++;
        }
        if(mp['1']&&mp['2']&&mp['3'])
        {
            mp.clear();
            ll hi=l,lo=1,mid=0,ans=0;
            while(hi>lo)
            {
                mid=(lo+hi)/2;
                if(bs(mid))
                {
                    ans=mid;
                    hi=mid;
                }
                else
                    lo=mid+1;
                    mp.clear();
            }
           if(!ans&&hi==lo)
                ans=(hi+lo)/2;
            cout<<ans<<endl;

        }
        else
            cout<<0<<endl;
        mp.clear();
    }
}
