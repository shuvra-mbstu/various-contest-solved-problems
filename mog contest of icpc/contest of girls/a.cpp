#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num1, num2,sum, cas=0,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&num1,&num2);
        sum=num1+num2;
        printf("Case %d: %d\n",++cas,sum);
    }
}
