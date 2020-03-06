#include<bits/stdc++.h>
using namespace std;
vector<long long int> vt;
void fun()
{
    long long int coun=0,val,dif=1;
    for(int i=1; i<=50000; i++)
    {
        long long int a=coun+dif;
        coun=a;
        vt.push_back(a*a);
        dif++;
        // cout<<a*a;
    }
}
int main()
{

    long long int test, num,ans;
    fun();
    while(scanf("%lld",&num)!=EOF)
    {
        if(num==1)
            ans=1;
        else
            ans=vt[num-2]+vt[num-1];

        printf("%lld\n",ans);
    }
}

