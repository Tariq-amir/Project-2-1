#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5][n+5];
    if((n*n)%2)
        cout<<n*n/2+1<<endl;
    else
        cout<<n*n/2<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%2)
                cout<<".";
            else
                cout<<"C";
        }
        cout<<endl;
    }
}
