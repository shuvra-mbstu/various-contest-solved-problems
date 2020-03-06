#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
     int t,sum,i,j,k,ar[100000],n,q,x,y;
     scanf("%d",&t);
     for(i=1;i<=t;i++)
     {

          printf("Case %d:\n",i);
          scanf("%d%d",&n,&q);
          for(j=0;j<n;j++)
          {
               scanf("%d",&ar[j]);
          }
          for(j=1;j<=q;j++)
          {
               scanf("%d%d",&x,&y);
               if(ar[0]==x)
                  {ar[0]=y;}
                    sum=0;
               for(k=1;k<n;k++)
               {
                    if(ar[k]==x)
                       {ar[k]=y;}

                    sum+=abs(ar[k-1]-ar[k]);
                    // printf("%d-%d = %d\n",ar[k-1],ar[k],sum);
               }

               printf("%d\n",sum);
          }
     }
}
