#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,i,j;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            n++;
    }
    //cout<<n<<endl;
    if(a.size()==1&&a[0]>='a'&&a[0]<='z')
       {
           a[0]=a[0]-32;
        cout<<a<<endl;
       }
    else if(n==a.size())
    {
        for(i=0;i<a.size();i++)
            a[i]=a[i]+32;
        cout<<a<<endl;
    }

    else if(n==a.size()-1&&a[0]>='a'&&a[0]<='z')
    {
        a[0]=a[0]-32;
        for(i=1;i<a.size();i++)
            a[i]=a[i]+32;
            cout<<a<<endl;
    }
    else
         cout<<a<<endl;

}
