#include<bits/stdc++.h>
#define lld long long
using namespace std;
int main()
{
    lld int n,c,i,s=0;
    cin>>n>>c;
    lld int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<=c)
           {
               s++;
            //cout<<s<<endl;
           }
        else
            {
                s=0;
                //cout<<s<<endl;
            }

    }
    cout<<s+1<<endl;
}
