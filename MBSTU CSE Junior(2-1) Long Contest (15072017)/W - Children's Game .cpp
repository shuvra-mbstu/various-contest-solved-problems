#include<bits/stdc++.h>
using namespace std;
//string res;

string st[100000];
string fun(int num)
{
    string res="";
    for(int i=0; i<num; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            string ss="", s2="";
            ss=st[i]+st[j];
            s2=st[j]+st[i];
            // cout<<ss<<"   " <<s2<<endl;
            int len=ss.size();
            for(int l=0; l<len; l++)
            {
                if(s2[l]>ss[l])
                {
                    swap(st[i],st[j]);
                    break;
                }
                else if(ss[l]>s2[l])break;
            }
        }
        res+=st[i];
    }
    return res;
}
int main()
{
    int num, coun;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)break;

        for(int i=0; i<num; i++)
        {
            cin>>st[i];
        }
        string res=fun(num);
        cout<<res<<endl;
    }
}
