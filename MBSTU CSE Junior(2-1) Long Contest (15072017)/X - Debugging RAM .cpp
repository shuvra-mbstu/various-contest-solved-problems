#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bits, val,num,arr[1000],sum,res;
    // map<string,int>mp;
    string st,ss[300],s2[300];
    while(scanf("%d%d",&bits,&val)!=EOF)
    {

        for(int i=0; i<val; i++)
        {
            cin>>st>>arr[i];
            ss[i]=st;
            // cout<<arr[i]<<"   "<<ss[i]<<"  "<<i<<endl;
        }
        //int res=0;
        int ac=0;
        for(int i=0; i<val; i++)
        {
            for(int j=0; j<arr[i]; j++)
            {
                cin>>s2[ac++];
                cout<<s2[ac-1]<<endl;
            }
        }
        res=0;
        ac=1;
        for(int i=0; i<val; i++)
        {
            for(int j=arr[i]-1; j>=0; j--)
            {
                for(int k=s2[j].size()-1; k>=0; k++)
                {
                    res+=((s2[j][k]-'0')*ac);
                }
            }

            //string s=ss[i];
            cout<<res<<endl;
            arr[i]=res;
        }
        scanf("%d",&num);
        for(int i=0; i<num; i++)
        {
            cin>>st;
            cout<<st<<"=";
            for(int j=0; j<val; j++)
            {
                if(st==ss[j])
                {
                    cout<<arr[j];
                    break;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
