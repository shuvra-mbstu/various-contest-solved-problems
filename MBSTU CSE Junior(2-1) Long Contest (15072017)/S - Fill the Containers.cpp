#include<bits/stdc++.h>
using namespace std;
#define mx 10101
long long int vess, arr[mx],num;
bool check(long long int v)
{
    int cont =1;
    int tm=0;
    for(int i=1; i<=num; i++)
    {
        if(arr[i]>v)
        {
            return false;
        }
        if(tm+arr[i]<=v)
        {
            tm += arr[i];
        }
        else
        {
            cont++;
            tm=arr[i];
        }
    }
    if(cont>vess){
    return false;
    }
    else
    {
        return true;
}
}
int fun(long long int lo, long long int hi )
{
    long long int ans,mid=(hi+lo)/2;
    ans=hi;
    bool cnt;
    while(lo<=hi){
    mid = (hi+lo)/2;
    cnt = check(mid);
    if(cnt==1)
   {
       if(mid<ans){
       ans=mid;
       }
       hi = mid-1;
   }
   else{
        lo=mid+1;
   }
}
return ans;
}
int main()
{
    long long int test, coun,res, sum,cas=0;
    //scanf("%lld",&test);

       while( scanf("%lld%lld",&num,&vess)!=EOF){
        sum=0;
        for(int i=1; i<=num; i++)
        {
            scanf("%lld",&arr[i]);
            sum=sum+arr[i];
        }
        res=  fun(1,sum);
        printf("%lld\n",res);
    }
    return 0;
}
