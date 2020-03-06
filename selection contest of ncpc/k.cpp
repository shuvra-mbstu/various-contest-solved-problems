#include<bits/stdc++.h>
using namespace std;
int k=-1;
int vis[10000000];
int main()
{
//   int  prime[100000];
    memset(vis,0,sizeof(vis));
    vis[0]=1;
    vis[1]=1;
    for(int i=4; i<=1000000; i+=2)
    {
        vis[i]=1;
    }
    for(int i=2; i<=10000; i++)
    {
       // cout<<i<<endl;
        if(vis[i]==0)
        {
                 //   cout<<i<<endl;
            // prime[++k]=i;
            for(int j=i*i; j<=1000000; j+=2*i)
            {
                vis[j]=1;
            }
        }
    }
    long long int num,sum=0,j=0;
    scanf("%lld",&num);
    for(int i=2; i<=sqrt(num); i++)
    {
        while((vis[i]==0)&&((num%i)==0))
        {
           // cout<<i<<endl;
            int k = i;
            stringstream ss(k);
            reverse(ss);
            stringstream m(ss);
            k=m;
            while(len>0){
                    int l= k%10;
            k=k/10;
            sum=sum*10+(l);
            }
            num=num/i;
           // cout<<num<<endl;
            j=1;
        }
        if((j==1)&&(vis[num]==0))
        {
            //cout<<"VNNF";
            cout<<num<<endl<<sum;
          int k = num;
            while(k>0){
                    int l= k%10;
            k=k/10;
            sum=sum*10+(l);
            cout<<sum<<endl;
            }
            break;
        }
    }
    if((j==1)&&(sum>0))
        printf("%lld\n",sum);
    else
        printf("-1\n");
}
