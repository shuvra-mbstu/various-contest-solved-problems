 #include<bits/stdc++.h>
using namespace std;
long long int num, arr[100015];
void build(int at, int l, int r)
{

}
int main()
{
  long long int test, num1,taka,sum=0,res,cas=0;
  scanf("%lld",&test);
  while(test--)
  {
      res=-1;
      scanf("%lld%lld",&num,&taka);
      for(int i=0;i<num;i++)
      {
          scanf("%lld",&arr[i]);
      }
      int j=0;
      sum=0;
      for(int i=0;i<num;i++)
      {
          sum=sum+arr[i];
          if(sum>taka)
          {
             long long int coun=0;
              while(((sum-coun)>taka) && (j<num))
              {
                  coun=coun+arr[j];
                  j++;
                  //cout<<coun<<endl<<sum<<endl;
              }
              sum=sum-coun;
                //cout<<coun<<"# "<<sum<<endl;

          }
           if((sum>res) && (sum<= taka))
          {
              res=sum;
             // cout<<res<<" @"<<sum<<endl;
          }
      }
      printf("Case %lld: %lld\n",++cas,res);
  }
}
