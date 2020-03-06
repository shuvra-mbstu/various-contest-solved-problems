#include<bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("out.txt", "w", stdout);
   deque<int> dq;
   int test,siz,ocur,num,res,i,len,cas=0;
   string st;
   scanf("%d",&test);
   while(test--)
   {
      dq.clear();
      scanf("%d%d",&siz,&ocur);
      printf("Case %d:\n",++cas);
      for(i=0;i<ocur;i++)
      {
         cin>>st;
         if((st=="pushLeft")||(st=="pushRight")){
         scanf("%d",&num);
         }
         if(dq.empty() &&((st=="popLeft")||(st=="popRight")))
         {
            printf("The queue is empty\n");
         }
         else if(dq.size()==siz&&((st=="pushLeft")||(st=="pushRight")))
         {
            printf("The queue is full\n");
         }
         else
            {
               if(st=="pushLeft")
               {
                  dq.push_front(num);
                  printf("Pushed in left: %d\n",num);
               }
               else if(st=="pushRight")
               {
                  dq.push_back(num);
                  printf("Pushed in right: %d\n",num);
               }
               else if(st=="popLeft")
               {
                  res=dq.front();
                  printf("Popped from left: %d\n",res);
                  dq.pop_front();
               }
               else if(st=="popRight")
               {
                  res=dq.back();
                  printf("Popped from right: %d\n",res);
                  dq.pop_back();
               }
            }
      }
   }
   return 0;
}
