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
    ll n,m,ans=0;
    cin>>n>>m;
    ans=min(n,m);
    if(ans%2)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;
}
