
#include<bits/stdc++.h>
using namespace std;
double digits[1000007];
int main()
{
    for(int i = 1; i< 1000001; i++){
        digits[i] = log10(i) + digits[i-1];
    }
    long long int test,num,base,i,cas=0;
    double sum,coun;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&num,&base);
        floor(sum=((digits[num]/digits[base])+1));
        printf("Case %lld: %.lf\n",++cas,sum);
    }
return 0;
}
