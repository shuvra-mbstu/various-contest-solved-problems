
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ll i,j,k,l,m,n,c,p,r,an;
    string s,a;
    vector<int>v;
    map<int,int>mp;
    scanf("%lld",&n);

    for(i=1;i<=n;i++)
    {
        an=0;
       cin>>s>>a>>k;
       //cout<<s<<" "<<a<<" "<<k<<endl;
       l=s.size();
       m=a.size();
       for(j=0;j<=l-m;j++)
       {
           r=j;
           c=0;
           for(p=0;p<m;p++)
           {
               if(s[r]!=a[p])
               c++;
            r++;

           }
           if(c<=k)
            an++;
            //cout<<c<<" "<<an<<endl;
       }
       printf("Case %lld: %lld\n",i,an);
    }

}
