#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  test, num, lar, sml, res, cas,i=0;
    scanf("%lf",&test);
    while(test--)
    {
        i++;
        scanf("%lf",&num);
        if(lar<num)
        {
            lar=num;
        }
        if(sml>num)
        {
            sml=num;
        }
        res=(lar/sml);
        printf("Case %.lf: %.2lf\n",i,res);
    }
}
