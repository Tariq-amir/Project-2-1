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
        ll a,b,x,y;
        string s,t;
        cin>>a>>b>>s;
        x = a,y = b;
        ll l = s.size();
        for0(i,l/2)
        {
            if(s[i] != s[l-i-1] && (s[i] == '?' || s[l-i-1] == '?'))
            {
                if(s[i] == '0')
                    s[l-i-1] = '0';
                else if(s[l-i-1] == '0')
                    s[i] = '0';
                else if(s[i] == '1')
                    s[l-i-1] = '1';
                else if(s[l-i-1] == '1')
                    s[i] = '1';
            }
        }
        for0(i,l)
        {
            if(s[i] == '0')
                a--;
            else if(s[i] == '1')
                b--;
        }
        for0(i,l/2)
        {
            if(s[i] == s[l-i-1] && s[i] == '?' && a>1)
                s[l-i-1] = '0', s[i] = '0', a -= 2;
        }
        for0(i,l/2)
        {
            if(s[i] == s[l-i-1] && s[i] == '?' && b>1)
                s[l-i-1] = '1', s[i] = '1', b -= 2;
        }
        for0(i,l)
        {
            if(s[i] == '?')
                {
                    if(a>0)
                    {
                         s[i] = '0' ;
                         break;
                    }
                    else if(b>0)
                    {
                         s[i] = '1';
                          break;
                    }
                }
        }
        ll f=0,z=0,o=0;
        for0(i,l)
        {
            if(s[i] == '0')
                z++;
            else if(s[i] == '1')
                o++;
        }
        if(z != x || o != y)
            f=1;
        t = s;
        rev(t);
        if(t != s)
            f=1;
        if(f)
            cout<<-1<<endl;
        else cout<<s<<endl;
    }
}


