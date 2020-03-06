#include<bits/stdc++.h>
using namespace std;
long long int arr[1007];
int main()
{
    long long int test, num,val,flgp,flgn,allbd,allgd,nu,res,coun,cn;
    scanf("%lld",&test);
    while(test--)
    {
        cn=0;
        allbd=0;
        allgd=0;
        flgp=0;
        flgn=0;
        nu=0;
        res=0;
        coun=0;
        scanf("%lld",&num);
        for(int i=1; i<=num; i++)
        {
            scanf("%lld",&val);
            arr[i]=val;

            if((i!=1)&&(arr[i]>arr[i-1] || arr[i]==arr[i-1]))
                allgd++;

            if((i!=1)&&(arr[i]<arr[i-1] || arr[i]==arr[i-1]))
                allbd++;

            if((i!=1)&&( arr[i]==arr[i-1]))
                nu++;

                if((i>=3) && (arr[i-2]<arr[i-1] && arr[i]<arr[i-1]))
                {
                    cn++;
                    flgp=flgn;
                    flgn=i-1;

                    if(cn>=2)
                    coun=flgn-flgp-1;

                    if( res<coun)
                    {
                        res=coun;
                    }
                }
            }
        if(nu+1 ==num)
        {
            printf("neutral\n");
        }
        else if(allgd+1 ==num)
            printf("allGoodDays\n");
        else if(allbd+1 ==num)
            printf("allBadDays\n");
        else if(cn>=2)
            printf("%lld\n",res);
        else
            printf("none\n");

    }
}
