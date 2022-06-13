#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define mx 10000000

using namespace std;

int main()
{

      string aa="1",b="107908796";

           string s1,s2;
        s1=aa;s2=b;
        cout<<"summation = "<<s1<<" "<<s2<<endl;
        if(s1.size()<s2.size())
        {
            cout<<(s2.size()-s1.size())<<endl;
            reverse(s1.begin(),s1.end());
            for(ll m=0;m<(s2.size()-s1.size());m++)
             {
                 cout<<"m = "<<m<<endl;
                  cout<<(s2.size()-s1.size())<<endl;
                 s1 = s1+'0';
             }
            reverse(s1.begin(),s1.end());
            cout<<"size = "<<s1.size()<<" "<<s2.size()<<endl;
            cout<<"summation = "<<s1<<" "<<s2<<endl;
        }

}
