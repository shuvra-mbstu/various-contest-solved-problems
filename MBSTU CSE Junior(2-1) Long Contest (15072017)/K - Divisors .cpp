#include<bits/stdc++.h>
using namespace std;
#define mxi  100007
long long int arr[mxi],l;
vector<long long int>prime,vt;
void sieve()
{
    prime.push_back(2);
    for(long long int i=3; i<=100007; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
           //cout<<i<<endl;
            for(long long int j =i*i; j<=100007; j+=2*i)
            {
                // cout<<j<<endl;
                arr[j]=1;
            }
        }
    }
}
/*void divisors()
{
    //cout<<"DFF"<<endl;

    vt.push_back(1);
    vt.push_back(1);
    int i=2;
    while(i<=10000000)
    {
        //  cout<<"DFF"<<endl;
        //   res[i]=(res[i-1]+vt[res[i-1]]);
        int coun=1,val=0;
        int n=i;
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
        vt.push_back(coun);
        //  cout<<vt[i]<<endl;
        // cout<<res[i]<<endl;
        i++;
    }
    return;
}*/
int main()
{
    long long int test, num1,num2, res,mx,valu;
    memset(arr,0,sizeof(arr));
    sieve();
   // divisors();
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&num1,&num2);

        if(num2<num1)swap(num1,num2);
        mx=0;
       int val=0;
        for(long long int i=num1; i<=num2; i++)
        {
             //if(i>10000000){
               int coun=1,val=0;
        int n=i;
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
        if(coun>mx)
        {
             mx=coun;
             valu=i;
        }
          /*  }
          else if(vt[i]>mx)
            {
                mx=vt[i];
                valu=i;
            }*/
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",num1,num2,valu,mx);
    }
}
