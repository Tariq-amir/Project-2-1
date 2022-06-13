#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
                x++;
        }
        if(x==n&&n%2!=0)
            cout<<"YES"<<endl;
        else if(x!=n&&x>0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
