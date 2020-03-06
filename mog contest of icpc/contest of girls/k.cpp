#include<bits/stdc++.h>
using namespace std;
#define MAX 1900000
char prime[MAX];
int digitprime[MAX];
void sieve_prime()
{
    int i,j,k,l,m,count=0,d,update,temp,sum2;
     int t=0;
     int serial;
    for(i=2;i<=MAX;i++)prime[i]=1;
    k=2;
    for(m=2;m<=sqrt(MAX);m++){
      for(j=k+k;j<=MAX;j=j+k){
        prime[j]=0;

      }
      k++;
      for(;!prime[k];k++);
        }
        update=0;
        for(d=0;d<=MAX;d++){

          if(prime[d]){

            temp=d;
            sum2=0;
            while(temp>=10){
             sum2+=temp%10;
             temp=temp/10;
            }
            sum2+=temp;
            if(prime[sum2])update++;
          }
          digitprime[d]=update;
        }
}
int main()
{
    sieve_prime();
    int serial,n1,n2,u,flag,count,test,low,up,sum,hold,w;
   // freopen("in10533.txt","r",stdin);
    scanf("%d",&test);
    for(n1=0;n1<test;n1++){
     scanf("%d %d",&low,&up);
      printf("%d\n",digitprime[up]-digitprime[low-1]);
        }
    return 0;
}
