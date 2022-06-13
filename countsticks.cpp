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
    string s;
    cin>>s;
    ll a=0,b=0,c=0,d=0;
    int j=0,k=0,e=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            e=i;
            j=i+1;
            break;
        }
        a++;
        j=i;
    }
    for(int i=j;i<s.size();i++)
    {
        if(s[i]=='=')
        {
            k=i+1;
            break;
        }
        b++;
        k=i;
    }
    for(int i=k;i<s.size();i++)
    {
        c++;
    }
    //cout<<a<<" "<<b<<" "<<c<<" "<<e<<endl;
    d=c-(a+b);
    if(d==0)
        cout<<s<<endl;
    else if(d==2)
    {
        for(int i=s.size()-1;i>0;i--)
            swap(s[i],s[i-1]);
        cout<<s<<endl;
    }
    else if(d==-2)
    {
        if(a<b)
        {
            for(int i=e+1;i<s.size()-1;i++)
                swap(s[i],s[i+1]);
        }
        else
        {
            for(int i=0;i<s.size()-1;i++)
                swap(s[i],s[i+1]);
        }
        cout<<s<<endl;
    }
    else
        cout<<"Impossible"<<endl;
}
