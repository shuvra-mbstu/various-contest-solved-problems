#define pi 3.14159
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cas=0,num1,num2,num3;
    double res1,res2,sum,res3;
    scanf("%d",&test);
    while(test--)
    {
        printf(" \n");
        scanf("%d%d",&num1,&num2);
        num3=(((2*num1)-(2*num2))/2);
        res1=(pi*(num1*num1));
        res2=(pi*(num2*num2));
        res3=(pi*(num3*num3));
        sum=((res1-(res2+res3))/2);
        res2=res2+sum;
        res3=res3+sum;
        printf("Taijitu #%d: yin %.2lf, yang %.2lf",++cas,res3,res2);
    }
}
/*Taijitu #1: yin 157.08, yang 157.08
Taijitu #2: yin 188.50, yang 263.89*/
