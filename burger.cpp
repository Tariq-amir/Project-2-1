#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,p,f,h,c;
    int x=0,y=0,v;
    cin>>t;
    while(t--)
    {
        cin>>b>>p>>f;
        cin>>h>>c;
        v=p+f;
        if(h>c)
        {
            while(b>1&&p>0)
            {
                x+=h;
                b-=2;
                p--;
            }
            if(b>1)
            {
                 while(b>1&&f>0)
            {
                y+=c;
                b-=2;
                f--;
            }
            }
            //cout<<x+y<<endl;

        }
        else if(h<c)
        {

            while(b>1&&f>0)
            {
                y+=c;
                b-=2;
                f--;
            }
            if(b>1)
            {
                while(b>1&&p>0)
            {
                x+=h;
                b-=2;
                p--;
            }
            }
           // cout<<x+y<<endl;

        }
        else
        {
            while(b>1&&v>0)
            {
                x+=h;
                b-=2;
                v--;
            }
        }
        cout<<x+y<<endl;
        x=0,y=0;
    }
}
