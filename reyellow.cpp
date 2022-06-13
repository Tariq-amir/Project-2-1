#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,k1,k2,n,i,j,x,y,z;
    cin>>a1>>a2>>k1>>k2>>n;
    x=a1*k1;
    y=a2*k2;
    {
        if(k1>k2)
        {
            z=n-y;
            j=n/k2;
            j+=z/k1;
            n=n-(a1*(k1-1));
            if(n-(a2*(k2-1))>0)
            i=n-(a2*(k2-1));
            else i=0;
        }
        else
        {
            z=n-x;
            j=n/k1;
            j+=z/k2;
            n=n-(a2*(k2-1));
            if(n-(a1*(k1-1))>0)
            i=n-(a1*(k1-1));
            else i=0;
        }
    }
    cout<<i<<" "<<j<<endl;
}
