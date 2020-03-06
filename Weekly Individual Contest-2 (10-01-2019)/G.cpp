#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num,val[200007],coun=0,pre=0;
     map<int,int> mpp;
     cin>>num;
     for(int i=0;i<num;i++)
     {
          cin>>val[i];
          mpp[val[i]]++;
     }
     int a;
     map<int,int> :: iterator it;
     for(it=mpp.begin();it!=mpp.end();it++)
     {
          a=it->second;
         coun+=a/4;
         a=a%4;
          if(pre>=2 &&a>=2 )
          {
              coun++;
              pre=0;
          }
          else if(a>=2){
               pre=a;
          }
     }
     cout<<coun<<endl;
}
