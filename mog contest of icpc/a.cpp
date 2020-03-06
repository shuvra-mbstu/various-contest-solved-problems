#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, n;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        if(n<0)
        {
            for(i=n; i<0; i++)
                printf("%lld ", i);
            printf("0\n");
        }
        else
        {
            for(i=0; i<n; i++)
                printf("%lld ", i);
            printf("%lld\n", n);
        }
    }
    return 0;
}
