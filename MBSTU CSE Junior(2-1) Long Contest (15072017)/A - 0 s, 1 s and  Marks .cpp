#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,coun,sum,cas=0;
    string st;
    scanf("%d",&test);
    while(test--)
    {
        cin>>st;
        int fst=0,lst=0,res=0;
        int len=st.size();
        res=1;
        coun=0;
        for(int i=0; i<len; i++)
        {
            if(st[i]=='?' )
            {
                if(i==0)
                {
                    while(st[i]=='?' && i<len)
                    {
                        i++;
                    }
                    if(i==len)
                    {
                        res=1;
                        //printf("Case %d: %d\n",++cas,res);
                        break;
                    }
                    else
                    {
                         int a=i-1;
                         while(a>=0){
                         if(st[a+1]=='0')st[a]='1';
                         else st[a]='0';
                         a--;
                    }

                }
                i=0;
                }
              else  if((st[i+1]=='?')||(st[i-1]==st[i+1])|| i==len-1)
                {
                    if(st[i-1]=='0')st[i]='1';
                    else st[i]='0';
                    // cout<<i<<"  "<<st[i]<<endl;
                }
                else
                {
                    int j=i-2;
                    fst=1;
                    while(j>=0 &&(st[i-1]==st[j]))
                    {
                        fst++;
                        j--;
                    }
                    j=i+2;
                    lst=1;
                    while( j<len && (st[i+1]==st[j]) )
                    {
                        lst++;
                        j++;
                    }
                    if(fst>lst)
                    {
                        st[i]=st[i+1];
                    }
                    else
                        st[i]=st[i-1];
                }
            }
            if(i!=0 && st[i-1]!=st[i])
            {
                coun=1;
            }
            else
            {
                coun++;
                if(res<coun)
                {
                    res=coun;
                    // cout<<i<<"  "<<res<<endl;
                }
            }
        }
        printf("Case %d: %d\n",++cas,res);
    }
}
