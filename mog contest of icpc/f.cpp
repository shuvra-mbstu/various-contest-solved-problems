#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, num,quer,arr[105], left, right, cas=0, res, rmq, i, j, k,ma[20000];
    scanf("%lld",&test);
    while(test--)
    {
        memset(arr, -1, sizeof(arr));
        scanf("%lld%lld",&num,&quer);
        rmq=-1;
        for(i=0;i<quer;i++)
        {
            scanf("%lld%lld%lld",&left,&right,&ma[i]);
            if(ma[i]>rmq)
            {
                rmq=res;
            for(j=left;j<=right;j++)
            {
                arr[j]=res;
            }
        }
        }
        for(i=1;i<=num;i++)
        {
            if(arr[i]==-1)
            {
                arr[i]=20000;
            }
        }
        printf("Case %lld: ",++cas);
        for(i=1;i<num;i++)
        {
            printf("%lld ",arr[i]);
        }
        printf("%lld\n",arr[i]);
    }
    return 0;
}
