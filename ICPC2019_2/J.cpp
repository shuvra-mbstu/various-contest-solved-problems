#include<bits/stdc++.h>
using namespace std;
vector<long long int>powr;
long long int ar[105],DP[105][105];

int lis(long long int pos,long long int prev,long long int n)
{
    //cout<<pos<<" "<<prev<<" "<<n<<endl;
   long long int ans1=0,ans2=0,x,siz;

    if(pos>n)return 0;

    siz= powr.size();
    for(int k=0; k!=siz; k++)
    {
        if(ar[pos]%powr[k]==0)
            x=k;
    }
   // cout<<x<<" "<<ar[pos]<<endl;

    if(DP[pos][prev]==-1)
    {
    if(ar[pos]>ar[prev])ans2=x+lis(pos+1,pos,n);
    ans1=lis(pos+1,prev,n);

    return DP[pos][prev]=max(ans1,ans2);
    }
    else return DP[pos][prev];

}

int main()
{
    int i=0;
    while(pow(2,i)<=1000000)
    {
        powr.push_back(pow(2,i));
     //   cout<<pow(2,i)<<endl;
        i++;
    }

    int t,n,sum,x;

    cin>>t;

    for(int i=0; i<t; i++)
    {
    memset(DP,-1,sizeof (DP));
        cin>>n;
        sum=0;
        for(int j=1; j<=n; j++)
        {
            cin>>ar[j];
        }
        cout<<lis(1,0,n)<<endl;
    }
}
