#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st, chr,res,s2;
    char ss;
    long long int num,i=0,j,len,len2,num2;
    cin>>st>>chr;
     len= st.size();
    j=0;
    for( i=0;i<len ;i++)
    {
        num=chr[j]-'A';
        num2=st[i]-'A';
        if (num2<num)
        {
           num2= num2+26;
        }
        ss=(65 +num2-num);
        res=res+ss;
        chr[j]=ss;
        j++;
        j=(j%3);
     //   cout<<res;
      //  printf("%c",ss);
        }
    cout<<res<<endl;
    }
