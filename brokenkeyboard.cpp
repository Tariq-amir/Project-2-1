#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        set <char> t;
       // set <char> :: iterator it;
        cin>>s;
        int l=s.size();

        for(int i=0;i<l;i++)
        {
            if(s[i]==s[i+1])
                {
                    s[i]='\0';
                    s[i+1]='\0';
                    i=i+1;
                }
        }
        sort(s.begin(),s.end());
        for(int i=0;i<l;i++)
        {
            if(s[i]!='\0')
                t.insert(s[i]);
        }
        for( auto it=t.begin();it!=t.end();it++)
            cout<<*it;
        cout<<endl;
    }
}
