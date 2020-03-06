#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,sum=0,j,arr[]={2,3,5,7};
    scanf("%lld",&num);
            j=num;

    for(int i=0; i<4; i++)
    {
     //   long long int j;
        while((j%arr[i]==0)&&(j>0))
        {
            sum=(sum*10)+(j%arr[i]);
            if(j/arr[i]<10)
            {

            }
                j=j/arr[i];
        }
    }
    if((sum!=num)&&(sum>0))
       printf("%lld\n",sum);
       else
        printf("-1\n");
}
