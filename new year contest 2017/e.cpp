#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, test, res,k;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
        res=0;
        int i=0;
        while(num--)
        {
            scanf("%lld",&k);
            if(i==0)
            {
                res=k;
                i++;
            }
            else
                res=(res^k);
        }
        printf("%lld\n",res);
    }
}
