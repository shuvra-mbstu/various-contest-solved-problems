
#include<bits/stdc++.h>
using namespace std;
double digits[1000007];
int main()
{

     int test,num,base,i,cas=0,sum,coun;
    digits[0]=0;
    for(int j = 1; j< 1000001; j++){
        digits[j] = log10(j) + digits[j-1];
    }
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&num,&base);
        //cout<<digits[num];
        floor(digits[num]);
        floor(sum=((digits[num]/log10(base))));
        printf("Case %d: %d\n",++cas,sum+1);
    }
return 0;
}
