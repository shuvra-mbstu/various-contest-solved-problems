#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int arr[10],val1,val2,cas=0;
     while(scanf("%lld%lld%lld%lld",&arr[0],&arr[1],&arr[2],&arr[3])!=EOF)
     {
          sort(arr,arr+4);
          val1=arr[2]+arr[3];
         // val2=arr[1]+arr[2];

         printf("Case %lld: %lld\n",++cas,val1);
         // else printf("Case %lld: %lld\n",++cas,val2);
     }
}
