#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int num,num1,num2,res;
  while(scanf("%lld",&num)!=EOF)
  {
      num1=(num+num);
      num2=(-2*num);
      res=abs(num1-num2);
     printf("%lld\n",res);
  }
}

