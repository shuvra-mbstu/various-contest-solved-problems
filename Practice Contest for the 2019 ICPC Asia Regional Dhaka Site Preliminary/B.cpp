#include<bits/stdc++.h>
using namespace std;

int arr[1000005];
int chk[1000005];
long long v[1000005];


void seive()
{
    long long x=0;
    //map<int,int>mp;
    for(int i=2; i<=1000000; i++)
    {
        x=0;
        x+=i;
        if(arr[i]==0)
        {
            for(int j=i+i; j<=1000000; j+=i)
            {

                v[j]+=x;
                x+=j;
                arr[j]++;
            }
        }
    }
    for(int i=6; i<=1000000; i++)
    {

        if(arr[i]>1)
        {
            x =(arr[i]-1)*i;
            for(int j=i+i; j<=1000000; j+=i)
            {
                //if(j==60)cout<<x<<endl;
                v[j]-=x;
                x+=(j*(arr[i]-1));
            }
        }
    }
}

int main()
{
    seive();

    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        cout<<v[n]<<endl;
    }
}
