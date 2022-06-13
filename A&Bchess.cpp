#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define si(n) scanf("%d",&n);
#define PI acos(-1.0)
#define sl(n) scanf("%lld",&n);
#define sf(n) scanf("%lf",&n);
#define ss(n) scanf("%s",n);
#define for0(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define forc(i,j,n) for(ll i=j;i<n;i++)
#define pb push_back
#define sor(n) sort(n.begin(),n.end())
#define sorcmp(n) sort(n.begin(),n.end(),cmp)
#define rev(n) reverse(n.begin(),n.end())
#define pi(x)  prllf("%d",x);
#define pl(x)  prllf("%lld",x);
#define pf(x)  prllf("%.10lf",x);
#define ps(x)  prllf("%s",x);
#define en() prllf("\n");
#define random_shuffle(r...)random_shuffle(r,[](int _){return rand()%_;})
#define SQR(a) (a)*(a)
#define mod 100000007
int main()
{
    char a[10][10];
    ll b=0,w=0;
    map<char,int>m;
    string s="qrbnpk",t="QRBNPK";
    int v[6]={9,5,3,3,1,0};
    for0(i,6)
    {
        m[s[i]]=v[i];
        m[t[i]]=v[i];
    }
    for0(i,8)
    {
        for0(j,8)
            cin>>a[i][j];
    }
    for0(i,8)
    {
        for0(j,8)
            {
                if(a[i][j]>='A'&&a[i][j]<='Z')
                    w+=m[a[i][j]];
                if(a[i][j]>='a'&&a[i][j]<='z')
                    b+=m[a[i][j]];
            }
    }
    //cout<<w<<" "<<b<<endl;
    if(w>b)
    cout<<"White"<<endl;
    else if(b>w)
        cout<<"Black"<<endl;
    else
        cout<<"Draw"<<endl;
}
