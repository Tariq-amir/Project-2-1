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
       map<char,char>m;
        string s,t;
        cin>>s;
        ll l=s.size(),cnt=0;
        ll a=0,b=0,c=0;
        for0(i,l)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else
                c++;
        }
        if(s[0]=='A')
        {
            m['A']='(';
            if(a<b+c)
            {
                if(c>b)
                {
                    m['B']='(';
                    m['C']=')';
                }
                else
                {
                    m['B']=')';
                    m['C']='(';
                }
            }
            else
            {
                m['B']=')';
                m['C']=')';
            }
        }
        else if(s[0]=='B')
        {
            m['B']='(';
            if(b<a+c)
            {
                if(c>a)
                {
                    m['A']='(';
                    m['C']=')';
                }
                else
                {
                    m['A']=')';
                    m['C']='(';
                }
            }
            else
            {
                m['A']=')';
                m['C']=')';
            }
        }
        else
        {
            m['C']='(';
            if(c<a+b)
            {
                if(b>a)
                {
                    m['A']='(';
                    m['B']=')';
                }
                else
                {
                    m['A']=')';
                    m['B']='(';
                }
            }
            else
            {
                m['A']=')';
                m['B']=')';
            }
        }
        for0(i,l)
            t+=m[s[i]];
        //cout<<t<<endl;
        for0(i,l)
        {
            if(t[i]=='(')
                cnt++;
            else
                cnt--;
            if(cnt<0)
                break;
        }
        if(cnt==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}


