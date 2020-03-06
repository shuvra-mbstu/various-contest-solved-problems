#include<bits/stdc++.h>
using namespace std;
int func(string st)
{
    int len =st.size();
    int j=0;
    sort(st.begin(),st.end());
    //cout<<st<<endl;
    for(int i=0;i<len;i++)
    {
        if(st[i]==st[i+1]){
            i++;
        }
        else if((st[i]!=st[i+1]))
        {
            if(j==1)
                return 0;
            else
                j=1;
        }
    }
    return 1;
}
int main()
{
    string st, s2, ss;
    int cas=0, coun, num,test;
    scanf("%d",&test);
    getchar();
   while(test--)
    {
        cin>>st;
        int len = st.size();
        coun=0;
        for(int i=0;i<len;i++)
        {
            if((st[i]>='a')&&(st[i]<='z')){
            s2=st[i];
                coun++;
            }
            for(int k =(i+1); k<len; k++){
            if((st[i]>='a')&&(st[i]<='z')){
            s2=s2+st[k];
         //   cout<<s2<<endl;
             num=func(s2);
            if(num==1)
            {
                coun++;
            }
        }
            }
        }
        printf("Case %d: %d\n",++cas,coun);
    }
    // st ="cpc";
  //  cout<<func(st);
}
