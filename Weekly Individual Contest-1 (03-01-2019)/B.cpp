#include<bits/stdc++.h>
using namespace std;
#define PB push_back
vector<int>pfactor[1000007],prim;
int a[100006],num,test;
int arr[1000007];
int main()
{
    memset(arr,0,sizeof(arr));
    for(int i=2; i<=1000002; i++)
    {
        if(arr[i]==0)
        {
            prim.PB(i);
            for(int j=i; j<=1000002; j+=i)
            {
                arr[j]=1;
                pfactor[j].PB(i);
            }
        }
    }
    cin>>test;
    map<int, int> mpp;

    while(test--)
    {
        int sum=0;
        cin>>num;
        for(int i=0; i<num; i++)
        {
            cin>>a[i];
            for(int j=0; j<pfactor[a[i]].size(); j++)
            {
                mpp[pfactor[a[i]][j]]++;
            }
        }
        map< int,int>:: iterator it;
        for(it=mpp.begin(); it!=mpp.end(); it++)
        {
            int coun=it->second;
           //  cout<<it->first<<" "<<it->second<<endl;
            if(coun%3==0)
            {
                sum+=coun/3;
            }
            else
            {
                sum+=coun/3;
                sum++;
            }
        }
        mpp.clear();
        cout<<sum<<endl;
    }
}
