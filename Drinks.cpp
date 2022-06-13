#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n],sum=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        sum+=a[j];
    }
    x=sum/n;
    printf("%.12f\n",x);
}
