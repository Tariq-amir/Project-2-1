#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,s=1;
   vector <pair<int,int>> v;
   cin>>n;
   for(i=0;i<n;i++)
   {
       int a;
       cin>>a;
       v.push_back({a,i+1});
   }
   sort(v.rbegin(),v.rend());
   for(i=1;i<n;i++)
   {
       s+=i*v[i].first+1;
   }
   cout<<s<<endl;
   for(i=0;i<n;i++)
    cout<<v[i].second<<" ";
    cout<<endl;
}
