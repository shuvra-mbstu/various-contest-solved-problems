#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num1, test, num2,res,k,cas=0;
    scanf("%lld",&test);
    while(test--)
    {
        res=0;
        k=0;
        int l=-1;
        scanf("%lld%lld",&num1,&num2);
        for(int i=1;i<=num1;i++)
        {
            res=res+(l*i);
            k++;
            if(k==num2)
            {
                k=0;
                l=-1*l;
            }
            }
            printf("Case %lld: %lld\n",++cas,res);
        }
    }
