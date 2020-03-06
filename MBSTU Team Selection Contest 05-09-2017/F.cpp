#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,arr[100007],alic=0,bob=0,suma=0,sumb=0;
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
   int i=0;
    int j=num-1;

    while(i<=j)
    {
        // cout<<i<<j<<" ALC "<<alic<<"  "<<suma<<" BOB "<<bob<<" "<<sumb<<endl;
        if(suma>sumb)
        {
            sumb+=arr[j];
            j--;
            bob++;
           // cout<<j<<"J\n";
        }
        else if(sumb>suma)
        {
            suma+=arr[i];
            i++;
            alic++;
                      //  cout<<i<<"I\n";

        }
        else if(sumb==suma)
        {

            if((bob+alic)==(num-1))
            {
                alic++;
                j--;
                i++;
            }
            else
            {
                sumb+=arr[j];
                j--;
                bob++;
                suma+=arr[i];
                i++;
                alic++;
            }
        }
    }
    printf("%d %d\n",alic,bob);
}
