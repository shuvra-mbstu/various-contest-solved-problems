#define mx 200007
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, arr[mx],res,coun,dif,ss;
    scanf("%lld",&num);
    res=9999999999;
    coun=0;
    for(int i=0; i<num; i++)
    {
        scanf("%lld",&arr[i]);
      for(int j=i-1;j>=0;j--){
            dif=abs(arr[i]-arr[j]);
            if(res==dif)
            {
                coun++;
            }
           else if(res>dif)
            {
                res=dif;
                coun=1;
            }
        }
        //cout<<arr[i]<<"  "<<dif<<" "<<res<<"  "<<coun<<endl;
    }
    printf("%lld %lld\n",res,coun);
}
