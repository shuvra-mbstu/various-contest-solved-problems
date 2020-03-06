#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num1[3], num2[3],num3[3],num4[3], cas=0,test;
     double res,sum1,sum2;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d%d%d%d",&num1[0],&num1[1],&num2[0],&num2[1],&num3[0],&num3[1]);
        num4[0]=((num1[0]+num3[0])-num2[0]);
        num4[1]=((num1[1]+num3[1])-num2[1]);
        sum1=((num1[0]*num2[1])+(num2[0]*num3[1])+(num3[0]*num4[1])+(num4[0]*num1[1]));
        sum2=((num1[1]*num2[0])+(num2[1]*num3[0])+(num3[1]*num4[0])+(num4[1]*num1[0]));
        res=.5*(sum1-sum2);
        if(res<0)res=-1*res;
        printf("Case %d: %d %d %.lf\n",++cas,num4[0],num4[1],res);
    }
    return 0;
}
