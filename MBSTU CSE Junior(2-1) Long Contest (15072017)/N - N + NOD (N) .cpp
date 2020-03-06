#include<bits/stdc++.h>
using namespace std;
#define mx  1000007
long long int vt[mx],res[mx],arr[mx],l;
vector<long long int>prime;
void sieve()
{
    prime.push_back(2);
    for(int i=3; i<=1007; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            //cout<<i<<endl;
            for(int j =i*i; j<=1007; j+=2*i)
            {
                // cout<<j<<endl;
                arr[j]=1;
            }
        }
    }
}
void divisors()
{
    //cout<<"DFF"<<endl;
    vt[0]=(1);
    vt[1]=(1);
    res[0]=1;
    res[1]=2;
    int  i=1;
    while(res[i]<1000000)
    {
        //  cout<<"DFF"<<endl;
        //   res[i]=(res[i-1]+vt[res[i-1]]);

        int coun=1,val=0;
        int n=res[i];
        for(int j=0; prime[j]*prime[j]<=n; j++)
        {
            val=0;
            while(n%prime[j]==0)
            {
                val++;
                n=n/prime[j];
            }
            coun*=(val+1);
        }
        if(n>1)
        {
            coun*=2;
        }
        vt[res[i]]=(coun);
        //  cout<<vt[i]<<endl;
       // cout<<res[i]<<endl;
        i++;
        res[i]=(res[i-1]+vt[res[i-1]]);
    }
    l=i;
    return;
}
int binary_searc(int target)
{
    int lo=0;
    int hig=l ;
    int ans=0;
    while(lo<=hig)
    {
        int mid=(lo +hig)/2;
        // cout << "mid = " <<  mid << endl;
         //cout << "res[mid] = " <<  res[mid] << endl;
        // cout << "target = " << target << endl;
        if(res[mid]==target)
        {
            return mid;
        }
        else if(res[mid]<target)
        {
            lo=mid+1;
             ans=mid;
        }
        else
        {
            hig=mid-1;
        }
    }
        return ans;
}
/*void fun()
{
    // cout<<"JJJJHOI"<<endl;
     int i=1;
     res[0]=0;
     res[1]=2;
     while(res[i]<=1000000)
     {
          //cout<<res[i]<<"  ";
                    res[i]=(res[i-1]+vt[res[i-1]]);
          i++;
     }
    // cout<<"\n";
}*/
int main()
{
    memset(arr,0,sizeof(arr));
    sieve();
    divisors();
    //fun();
   /* for(int i=0; i<20; i++)
    {
         printf("i = %d res[i] = %d\n",i,res[i]);
    }*/
    int test, num1,num2,cas=0;
    scanf("%d",&test);
    while(test--)
    {
       //  cout<<l<<endl;
        scanf("%d%d",&num1,&num2);
        int coun=0;
      //  while()
        int lo=binary_searc(num1);
        int hi=binary_searc(num2);
        //cout<<lo<<"  "<<hi<<"  "<<endl;
       // cout << lo << "=  lo ___ hi = " << hi << endl;
        coun=hi-lo;
        if(((res[lo]==num1) && (res[hi]<=num2)) || ((res[lo]==num2)&&(res[hi]!=num1)))coun++;
       // else if()coun--;
        printf("Case %d: %d\n",++cas,coun);
    }
}
