#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ptr='a';
    int sum=0,x;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        x=abs((ptr-'a')-(s[i]-'a'));
        //cout<<x<<endl;
        if(x>13)
        {
            sum+=(26-x);
        }
        else
            sum+=x;
        ptr=s[i];
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
}
