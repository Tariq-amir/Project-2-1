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
    string s;
    cin>>s;
    ll l=s.size();
    if(s[0]=='-')
    {
        //cout<<"test"<<endl;
       ll m=0,n=0,j=1,k=1;
        for(int i=l-1;i>0;i--)
        {
            if(i==l-2)
                continue;
            m+=(s[i]-'0')*j;
            j*=10;
        }
        for(int i=l-2;i>0;i--)
        {
            n+=(s[i]-'0')*k;
            k*=10;
        }
        ll ans=min(n,m);
        if(ans)
        cout<<-ans<<endl;
        else
            cout<<0<<endl;
    }
    else cout<<s<<endl;
}
