#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,x,i,j;

    cin>>q;
    while(q--)
    {
        cin>>x;
        map <int,int> m;
        for(i=0;i<x;i++)
        {
            cin>>j;
            m[j]++;
        }
        for(i=2;i<=2048;i=i*2)
        {
            m[i]+=m[i/2]/2;
        }
        if(m[2048]>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
       // for(i=2;i<=2048;i=i*2)
           // m[i]=0;

    }
}
