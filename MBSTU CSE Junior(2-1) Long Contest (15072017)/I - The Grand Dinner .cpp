#include<bits/stdc++.h>
using namespace std;
vector<int>vt[200];
int team,tab,arrtm[107];
struct st
{
    int val,ind;
} st1[107];
void sort_s()
{
    for(int i=0; i<tab; i++){
        for(int j=i+1; j<tab; j++)
        {
            if(st1[i].val<st1[j].val)
            {
                swap(st1[i],st1[j]);
            }

        }
}
    return ;
}
int main()
{
    while(scanf("%d%d",&team,&tab)!=EOF)
    {
        int flg=0;
        if(team==0 && tab==0)break;

        for(int i=0; i<team; i++)
        {
            scanf("%d",&arrtm[i]);

            if(arrtm[i]>tab)flg=1;
        }

        for(int i=0; i<tab; i++)
        {
            scanf("%d",&st1[i].val);
            st1[i].ind=i;
        }
        if(flg==0){
        sort_s();
        for(int i=0;i<team;i++)
        {
            for(int j=0;j<tab;j++)
            {
                 if(st1[j].val>0 && arrtm[i]>0)
                 {
                      vt[i].push_back(st1[j].ind);
                      arrtm[i]--;
                      st1[j].val--;
                 }
            }
            if(arrtm[i]>0)
            {
                 flg=1;
                 break;
            }
            sort_s();
        }
    }
    if(flg==1)
    {
         printf("0\n");

                  for(int i=0;i<team;i++)
              vt[i].clear();
    }
    else
    {
         printf("1\n");
         for(int i=0;i<team;i++)
         {
              sort(vt[i].begin(),vt[i].end());
              for(int j=0;j<vt[i].size();j++)
              {
                   if(j!=0)printf(" ");

                   printf("%d",vt[i][j]+1);
              }
              printf("\n");
              vt[i].clear();
         }
    }
    }
    return 0;
}
