#include<bits/stdc++.h>

using namespace std;
int main()
{

    string g1="First string";
    for(int i=0;i<g1.size()/2;i++)
    swap(g1[i],g1[g1.size()-i-1]);
    cout<<g1<<endl;
    return 0;
}
