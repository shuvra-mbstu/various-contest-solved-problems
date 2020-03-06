#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num1, num2,sum, cas=0,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&sum);
        num1=0;
        num2=sum;
        if(sum>10)
        {
            num1=sum-10;
            num2=10;
        }
        printf("%d %d\n",num1,num2);
    }
    return 0;
}
