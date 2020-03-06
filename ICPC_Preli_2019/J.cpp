#include<bits/stdc++.h>
using namespace std;

     long long t,k,x,res,mx=-1,mn=2000000000000;

int main()
{
     cin>>t;

     for(int j=1;j<=t;j++)
     {
         cin>>k;
         res=1;
      mx=-1;
      mn=200000000000;
             for(int i=0;i<k;i++)
         {
             cin>>x;
             //mx=max(x,mx);
             if(mx<x)mx=x;

            if(mn>x) mn=x;
         }
             res=mx*mn;

         cout<<"Case "<<j<<": "<<res<<endl;
     }
}


