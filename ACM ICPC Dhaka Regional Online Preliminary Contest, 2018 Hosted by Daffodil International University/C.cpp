#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> adj[100007];
stack<int> st;
int vis[100007];
void dfs(int s)
{
     if(vis[s]==0)return;
 //   cout<<" #"<<s<<vis[s]<<" \n";

     vis[s]=0;
       //  cout<<" #"<<s<<vis[s]<<"\n";

     int val = adj[s].size();
     for(int i=0;i<val;i++)
     {
          if(vis[adj[s][i]]==-1){
                   // cout<<adj[s][i]<<endl;
          dfs(adj[s][i]);
          }

     }
        // cout<<s<<"@";

     st.push(s);
return;
}
void dfss(int s)
{
     if(vis[s]==0)return;
     vis[s]=0;
     int val = adj[s].size();
     for(int i=0;i<val;i++)
     {
          if(vis[adj[s][i]]==-1){
         cout<<s<<" "<<adj[s][i]<<endl;
          dfss(adj[s][i]);
     }
    // st.push(s);
     //cout<<s<<endl;
}
}
int main()
{
     int test, num, edg, nod1,nod2,val,cas=0;
     scanf("%d",&test);
     while(test--)
     {
          int coun=0;
          scanf("%d",&num);
          for(int i=0;i<num-1;i++)
          {
               scanf("%d%d",&nod1,&nod2);
               adj[nod1].push_back(nod2);
              adj[nod2].push_back(nod1);
          }
          cout<<"Case "<<++cas<<":\n";
          memset(vis,-1,sizeof(vis));
          for(int i=1;i<=num;i++)
          {
               if(vis[i]==-1){
                        // cout<<i<<vis[i]<<endl;
          dfs(i);
               }
          }
    // reverse(st.begin(),st.end());
                    memset(vis,-1,sizeof(vis));
                   //cout<<endl;
          while(!st.empty())
          {
               val=st.top();
               st.pop();
             // cout<<val<<" ";
               if(vis[val]==-1)
               {
           //
                     dfss(val);
               }
          }
         // cout<<endl;
          for(int i=1;i<=num;i++)
          {
               adj[i].clear();
          }
     }
}
