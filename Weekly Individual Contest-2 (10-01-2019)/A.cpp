#include<bits/stdc++.h>
using namespace std;
long long int gcd( long long int a, long long int b)
{
     if(b==0)return a;
     else
     return gcd(b,a%b);
}
int main()
{
long long int sum,gd,val;
cin>>sum>>gd;
val=sum/gd;
if(sum%gd!=0)
cout<<"-1\n";
else {
          val=(val-1)*gd;
     if(gcd(val,gd)==gd && (gd+val)==sum && sum!=gd)
     cout<<max(val,gd)<<" "<<min(gd,val)<<endl;
     else  cout<<"-1\n";
}
}
