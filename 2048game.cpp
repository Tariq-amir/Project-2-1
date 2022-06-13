#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define pb push_back
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll power(ll n,ll p) {ll k=n; for(ll i=0;i<p-1;i++) n*=k; return n;}

 ll arr[200];
int  main()
{

    IOS;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0;

        cin>>n;
        memset(arr,0,sizeof(arr));
        while(n--)
        {
            ll x;
            cin>>x;
            if(x==2048)
        { flag=1;
            }
            ll  temp= log(x)/log(2);
            arr[11-temp]++;
        }
        if(flag==1) { cout<<"YES"<<endl; continue;}
        if(flag==0){
                ll check=0;

        if(arr[1]>=2) cout<<"YES"<<endl;
        else if(arr[2]>=4) cout<<"YES"<<endl;
        else if(arr[3]>=8) cout<<"YES"<<endl;
        else if(arr[4]>=16) cout<<"YES"<<endl;
        else if(arr[5]>=32) cout<<"YES"<<endl;
        else if(arr[6]>=64) cout<<"YES"<<endl;
        else if(arr[7]>=128) cout<<"YES"<<endl;
        else if(arr[8]>=256) cout<<"YES"<<endl;
        else if(arr[9]>=512) cout<<"YES"<<endl;
        else if(arr[10]>=1024) cout<<"YES"<<endl;

        else if(arr[1]==1)
        {
            if(arr[2]>=2) {check=1;cout<<"YES"<<endl;}
            else if(arr[3]>=4) {check=1;cout<<"YES"<<endl;}
            else if(arr[4]>=8) {check=1;cout<<"YES"<<endl;}
            else if(arr[5]>=16) {check=1;cout<<"YES"<<endl;}
            else if(arr[6]>=32) {check=1;cout<<"YES"<<endl;}
            else if(arr[7]>=64) {check=1;cout<<"YES"<<endl;}
            else if(arr[8]>=128) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=256) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=512) {check=1;cout<<"YES"<<endl;}

        }
        else  if(arr[2]==1)
        {

            if(arr[3]>=6) {check=1;cout<<"YES"<<endl;}
            else if(arr[4]>=12) {check=1;cout<<"YES"<<endl;}
            else if(arr[5]>=24) {check=1;cout<<"YES"<<endl;}
            else if(arr[6]>=48) {check=1;cout<<"YES"<<endl;}
            else if(arr[7]>=96) {check=1;cout<<"YES"<<endl;}
            else if(arr[8]>=192) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=384) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=768) {check=1;cout<<"YES"<<endl;}

        }
             else if(arr[3]==1)
        {



        if(arr[4]>=14) {check=1;cout<<"YES"<<endl;}
            else if(arr[5]>=28) {check=1;cout<<"YES"<<endl;}
            else if(arr[6]>=56) {check=1;cout<<"YES"<<endl;}
            else if(arr[7]>=112) {check=1;cout<<"YES"<<endl;}
            else if(arr[8]>=224) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=448) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=896) {check=1;cout<<"YES"<<endl;}
        }
           else  if(arr[4]==1)
        {



            if(arr[5]>=30) {check=1;cout<<"YES"<<endl;}
            else if(arr[6]>=60) {check=1;cout<<"YES"<<endl;}
            else if(arr[7]>=120) {check=1;cout<<"YES"<<endl;}
            else if(arr[8]>=240) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=480) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=960) {check=1;cout<<"YES"<<endl;}

        }
             else  if(arr[5]==1)
        {




            if(arr[6]>=62) {check=1;cout<<"YES"<<endl;}
            else if(arr[7]>=124) {check=1;cout<<"YES"<<endl;}
            else if(arr[8]>=248) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=496) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=992) {check=1;cout<<"YES"<<endl;}

        }
               else if(arr[6]==1)
        {



             if(arr[7]>=126) {check=1;cout<<"YES"<<endl;}
            else if(arr[8]>=252) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=504) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=1008) {check=1;cout<<"YES"<<endl;}

        }
               else  if(arr[7]==1)
        {




             if(arr[8]>=254) {check=1;cout<<"YES"<<endl;}
            else if(arr[9]>=508) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=1016) {check=1;cout<<"YES"<<endl;}

        }
              else   if(arr[8]==1)
        {




             if(arr[9]>=510) {check=1;cout<<"YES"<<endl;}
            else if(arr[10]>=1020) {check=1;cout<<"YES"<<endl;}


        }
             else   if(arr[9]==1)
        {



          if(arr[10]>=1022) {check=1;cout<<"YES"<<endl;}

        }

         if(check==0)cout<<"NO"<<endl;


    }

    }

}

