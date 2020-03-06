#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num1, num2,num3, cas=0,test,n;
     float sum;
    scanf("%d",&test);
    while(test--)
    {
        n=0;
        scanf("%d%d%d",&num1,&num2,&num3);
        if((num1>num2)&&(num1>num3))
           {
                sum=sqrt((num2*num2)+(num3*num3));
               if(sum==num1)
               {
                   n=1;
               }
           }
           else if((num2>num1)&&(num2>num3))
           {
                sum=sqrt((num1*num1)+(num3*num3));
               if(sum==num2)
               {
                   n=1;
               }
           }
           else  if((num3>num2)&&(num3>num1))
           {
                sum=sqrt((num2*num2)+(num1*num1));
               if(sum==num3)
               {
                   n=1;
               }
           }
           if(n==1)
        printf("Case %d: yes\n",++cas);
        else
                   printf("Case %d: no\n",++cas);
    }
}

