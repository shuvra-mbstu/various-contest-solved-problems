#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, num, res,cas=0;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
        res=num/2;
        printf("Case %lld: %lld\n",++cas,res);
    }
    return 0;
}
