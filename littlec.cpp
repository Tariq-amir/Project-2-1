#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,x,y,z;
    cin>>n;
    x=n/3;
    if(x%3==0)
        x--;
    i=n-x;
    j=i/2;
    k=i-j;
    if(j%3==0 || k%3==0)
    {
        j--;
        k++;
    }
    cout<<x<<" "<<j<<" "<<k<<endl;
}
