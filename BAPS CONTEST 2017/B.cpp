#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, num, qury,sum,arr[5007],res;
    scanf("%lld",&test);
    while(test--)
    {
        sum=0;
        res=0;
        int k=0;
        scanf("%lld%lld",&num,&qury);
        for(int i=0; i<num; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(int i=0; i<num; i++)
        {
            sum=0;
            for(int j=i; j<num; j++)
            {
                if(arr[j]<0 && qury>0)
                {
                    qury--;
                }
                else
                    sum+=arr[j];
                if(qury<=0)
                {

                    while(arr[k]>=0 )
                    {
                         k++;
                         if(k>i)
                              break;
                    }
                    sum-=arr[k];
                    qury++;
                }
                if(res<sum)
                {
                    res=sum;
                }
            }
        }
        printf("%lld\n",res);
    }
}
