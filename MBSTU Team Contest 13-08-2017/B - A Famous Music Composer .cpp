#include<bits/stdc++.h>
using namespace std;
vector<string>vt[100];
int main()
{
     string st,ss;
     int cas=0;
     vt[0].push_back("A#");
     vt[0].push_back("Bb");
     vt[1].push_back("C#");
     vt[1].push_back("Db");
     vt[2].push_back("D#");
     vt[2].push_back("Eb");
     vt[3].push_back("F#");
     vt[3].push_back("Gb");
     vt[4].push_back("G#");
     vt[4].push_back("Ab");

     while(cin>>st>>ss)
     {
        if(st.size()==1)
          printf("Case %d: UNIQUE\n",++cas);
          else
          {
               printf("Case %d: ",++cas);
               for(int i=0;i<5;i++)
               {
                    if(st==vt[i][0])
                    {
                         cout<<vt[i][1];
                    }
                    else if(st==vt[i][1])
                    {
                         cout<<vt[i][0];
                    }
               }
               cout<<" "<<ss<<endl;
          }
     }
}
