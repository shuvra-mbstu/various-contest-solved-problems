#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,arr[50],arr1[50],sum=0,coun=0,a,b;
    scanf("%lld",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%lld",&arr[i]);
        arr1[i]=arr[i];
        if(i!=0)
        {
            sum=sum+abs(arr[i]-arr[i-1]);
            cout<<sum<<endl;
        }
    }
        sort(arr1,arr1+test);
        a=arr1[0];
        b=arr1[1];
        for(int j=0;j<test;j++)
        {
            if(arr[j]==a)
            {
                arr[j]=b;
            }
            if(arr[j]==b)
            {
                arr[j]=a;
            }
            if(j!=0)
            {
                coun=coun+abs(arr[j]-arr[j-1]);
            }
        cout<<coun<<endl;
        }
        printf("%lld\n",abs(coun-sum));
}
