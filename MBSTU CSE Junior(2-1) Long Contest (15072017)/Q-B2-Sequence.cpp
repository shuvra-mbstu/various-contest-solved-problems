#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val[20007], arr[107], num,cas=0;
    while(scanf("%d",&num)!=EOF)
    {
        memset(val,0,sizeof(val));
        int flg=0;
        for(int i=0; i<num; i++)
        {
            scanf("%d",&arr[i]);
            if(i>0 && arr[i-1]>=arr[i])
            {
                 flg=1;
            }
            if(arr[i]<=0)flg=1;
        }
        for(int i=0; i<num; i++)
        {
            for(int j=i; j<num; j++)
            {
                int sum=arr[i]+arr[j];
                if(val[sum]==1)
                {
                    flg =1;
                    break;
                }
                else
                    val[sum]=1;
            }
            if(flg==1)
            {
                break;
            }
        }
        if(flg==1)
            printf("Case #%d: It is not a B2-Sequence.\n\n",++cas);
        else
            printf("Case #%d: It is a B2-Sequence.\n\n",++cas);
    }
}
