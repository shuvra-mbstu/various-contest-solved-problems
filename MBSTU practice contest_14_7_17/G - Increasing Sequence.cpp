#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int num, add, arr[3000],cnt=0;
     scanf("%lld%lld",&num,&add);
               scanf("%lld",&arr[0]);
     for(int i=1;i<num;i++)
     {
          scanf("%lld",&arr[i]);

               if(arr[i]<=arr[i-1])
               {
                        int val=arr[i-1]-arr[i];
                        val=val/add;
                         arr[i]+=(val*add);
                         cnt+=val;
                         if(arr[i]<=arr[i-1])
                         {
                              arr[i]+=add;
                              cnt++;
                         }
                    }
               }
     printf("%lld\n",cnt);
    // printf("%lld\n",cnt);
}
