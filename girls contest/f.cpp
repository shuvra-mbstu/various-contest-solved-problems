#define mx 100000000
#include<bits/stdc++.h>
using namespace std;
long long int arr[mx],cas=0;
int main()
{
    long long int test;
    scanf("%lld",&test);
    while(test--)
    {
        for(int i=0;i<3;i++)
        {
            scanf("%lld",&arr[i]);
        }
        printf("Data set #%lld:\n",++cas);
        printf("   Original order: %lld %lld %lld\n",arr[0],arr[1],arr[2]);
        sort(arr,arr+3);
        printf("   Smallest to largest: %lld %lld %lld\n",arr[0],arr[1],arr[2]);
        printf("\n");
    }
}
