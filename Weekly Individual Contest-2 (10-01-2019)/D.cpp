#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,ss,st,sp;
    cin>>s1>>s2;
    int len=s1.size();
    int a=-1,b=0;
    ss="";
    st="";
    if(s1==s2)
    {
        cout<<"YES\n";
        return 0;
    }

    for(int i=0; i<len; i++)
    {
        if(s1[i]!=s2[i] && a==-1)
        {
            a=i;
        }
        if(s1[i]!=s2[i])
        {
            b=i;
        }
    }
    // cout<<a<<" "<<b<<endl;
    ss=s1.substr(a,b-a+1);
    st=s2.substr(a,b-a+1);
    reverse(ss.begin(),ss.end());
    //  cout<<ss<<" "<<st<<endl;
    if(ss==st)
        cout<<"YES\n";
    else
    {
        //   cout<<ss<<" "<<st;
        cout<<"NO\n";
    }
}
