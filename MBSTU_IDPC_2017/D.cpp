#include<bits/stdc++.h>
using namespace std;
#define mx 1009
long long int arr1[mx],arr2[mx],arr3[mx];
int main()
{
long long int test, num,num1,num2,num3,sum[1000006],cas=0;
scanf("%lld",&test);
while(test--)
{
    if(cas!=0)
    {
        printf("\n")
    }
    scanf("%lld%lld%lld%lld",&num1,&num2,&num3,&num);
    for(int i=0;i<num1;i++)
    {
        scanf("%lld",&arr1[i]);
    }
     for(int i=0;i<num2;i++)
    {
        scanf("%lld",&arr2[i]);
    }
     for(int i=0;i<num3;i++)
    {
        scanf("%lld",&arr3[i]);
    }
    sort(arr1,arr1+num1);
    sort(arr2,arr2+num2);
        sort(arr3,arr3+num3);
   sum=arr1[0]+arr2[0]+arr3[0];
  else if(sum<=num)
   {
       printf("Case %lld: YES\n",++cas);
   }
   else
           printf("Case %lld: NO\n",++cas);

}
}

