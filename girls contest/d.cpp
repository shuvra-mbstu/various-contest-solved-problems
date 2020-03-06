#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, num, price,res;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&num,&price);
        res=((price*num)-(2*(num-1)));
        printf("%lld %lld\n%lld\n",num,price,res);
    }
}
