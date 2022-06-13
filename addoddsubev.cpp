#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,s,x,y,d;
        cin>>a>>b;
        if(a==b)
            s=0;
        else if(a<b)
        {
            d=b-a;
            if(d%2)
                s=1;
            else
                s=2;
        }
        else
        {
            d=a-b;
            if(d%2)
                s=2;
            else
                s=1;
        }
        cout<<s<<endl;
    }
}
