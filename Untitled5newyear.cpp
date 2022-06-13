#define ll long LONG_LONG_MAX
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,t,sum=0,hh,tt;
        cin>>h>>t;
        hh=(24-h);
        //tt=(60-t);
        sum=60*hh-t;
        cout<<sum<<endl;
    }
}
