#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, cas=0,i,j,k, test, coun, res,arr[100007];
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
        coun=1;
        for(i=0; i<num; i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+num);
        for(i=0; i<num; i++)
        {
            if((arr[i]==arr[i+1]))
            {
                coun++;
            }
        }
        printf("Case %lld: %lld\n",++cas,coun);
    }
    return 0;
}
