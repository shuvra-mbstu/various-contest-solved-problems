#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int ar[mx+5]={0};
vector<int>prime;
vector<int>factor;
int ans[mx+5];
int fun(int p, int k)
{
    int pk=1;
    for(int i=1; i<=k; i++)
    {
        pk *= p;
    }

    return pk;
}
void sieve()
{
    for(int i=1;  i<=mx; i++)
    {
        ans[i]= 1;
    }

    for(int i=2; i<=mx; i++)
    {
        if(ar[i]==0)
        {
            ans[i] = i+1;

            for(int j=i+i; j<=mx; j+=i)
            {
                ar[j] = 1;

                int x=j;
                int cnt=0;
                while(x%i==0)
                {
                    cnt++;
                    x /= i;
                }

                int pk = fun(i,cnt+1);
                ans[j] *= (pk-1)/(i-1);
            }
        }
    }
}
int main()
{
    sieve();

     int n,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        printf("%d\n",(ans[n]-n));
    }
    return 0;
}
