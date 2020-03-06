#include<bits/stdc++.h>
using namespace std;
int main()
{
     string st;
     int arr[300];
     memset(arr,0,sizeof(arr));
     cin>>st;
     int len=st.size();
     for(int i=0;i<len;i++)
     {
          arr[st[i]-'a']=1;
     }
     int coun=0;
     for(int i=0;i<26;i++)
     {
          if(arr[i]==1)coun++;
     }
     if(coun%2)cout<<"IGNORE HIM!\n";
     else cout<<"CHAT WITH HER!\n";
}
