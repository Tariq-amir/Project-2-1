#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define limit 1000005
#define lol (ll) sqrt((double)limit)
#define pb push_back
#define sci(x) scanf("%d",&x)
#define scl(y) scanf("%lld",&y)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        for(int i=0;i<n;i++)
        {
            for(char j='a';j<'a'+k;j++)
                {
                    s+=j;
                    if(s.size()==n)
                        break;
                }
                if(s.size()==n)
                        break;
        }
        cout<<s<<endl;
    }
}
