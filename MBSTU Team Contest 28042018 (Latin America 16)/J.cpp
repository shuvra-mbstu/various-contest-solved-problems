/******************************************************************************************* **********************************\

_____/\\\\\\\\\\\___        __/\\\________/\\\_        __/\\\________/\\\_        __/\\\________/\\\_        ____/\\\\\\\\\_____        _____/\\\\\\\\\____
 ___/\\\/////////\\\_        _\/\\\_______\/\\\_        _\/\\\_______\/\\\_        _\/\\\_______\/\\\_        __/\\\///////\\\___        ___/\\\\\\\\\\\\\__
  __\//\\\______\///__        _\/\\\_______\/\\\_        _\/\\\_______\/\\\_        _\//\\\______/\\\__        _\/\\\_____\/\\\___        __/\\\/////////\\\_
   ___\////\\\_________        _\/\\\\\\\\\\\\\\\_        _\/\\\_______\/\\\_        __\//\\\____/\\\___        _\/\\\\\\\\\\\/____        _\/\\\_______\/\\\_
    ______\////\\\______        _\/\\\/////////\\\_        _\/\\\_______\/\\\_        ___\//\\\__/\\\____        _\/\\\//////\\\____        _\/\\\\\\\\\\\\\\\_
     _________\////\\\___        _\/\\\_______\/\\\_        _\/\\\_______\/\\\_        ____\//\\\/\\\_____        _\/\\\____\//\\\___        _\/\\\/////////\\\_
      __/\\\______\//\\\__        _\/\\\_______\/\\\_        _\//\\\______/\\\__        _____\//\\\\\______        _\/\\\_____\//\\\__        _\/\\\_______\/\\\_
       _\///\\\\\\\\\\\/___        _\/\\\_______\/\\\_        __\///\\\\\\\\\/___        ______\//\\\_______        _\/\\\______\//\\\_        _\/\\\_______\/\\\_
        ___\///////////_____        _\///________\///__        ____\/////////_____        _______\///________        _\///________\///__        _\///________\///__

 ///   CSE, MBSTU;
///   mail :  Shuvradebnathcse547@gmail.com
****************************************************************************************************************************************/
 #include <bits/stdc++.h>

using namespace std;


#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#define inf INT_MAX/3
#define INF INT_MAX/3
#define PB push_back
#define pb push_back
#define MP make_pair
#define mp make_pair
#define ALL(a) (a).begin(),(a).end()
#define all(a) (a).begin(),(a).end()
#define SET(a,c) memset(a,c,sizeof a)
#define CLR(a) memset(a,0,sizeof a)
#define PII pair<int,int>
#define pii pair<int,int>
#define pcc pair<char,char>
#define pic pair<int,char>
#define pci pair<char,int>
#define VS vector<string>
#define VI vector<int>
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)
#define PI acos(-1.0)
#define INFILE() freopen("in0.txt","r",stdin)
#define OUTFILE()freopen("out0.txt","w",stdout)
#define in scanf
#define out printf
#define LL long long
#define ll long long
#define ULL unsigned long long
#define ull unsigned long long
#define eps 1e-14
#define MOD 1000000007
//#define PI 3.14159265
template<typename T>inline string toString(T a)
{
    ostringstream os("");
    os<<a;
    return os.str();
}
template<typename T>inline ll toLong(T a)
{
    ll res;
    istringstream os(a);
    os>>res;
    return res;
}
//MATHEMATICS
template<typename T>inline T  S(T a)
{
    return a*a;
}
template<typename T>inline T gcd(T a, T b)
{
    if (b == 0)return a;
    else return gcd(b, a % b);
}
template<typename T>inline ull bigmod(T a, T b, T m)
{
    if (b == 0)return 1;
    else if (b % 2 == 0)return S(bigmod(a, b / 2, m)) % m;
    else return (a % m*bigmod(a, b - 1, m)) % m;
}
template<typename T>inline VS parse(T str)
{
    VS res;
    string s;
    istringstream os(str);
    while(os>>s)res.pb(s);
    return res;
}
template<typename T>inline ull  dist(T A,T B)
{
    ull res=(A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y);
    return res;
}
template<typename T>inline double cosAngle(T a,T b,T c)
{
    double res=a*a+b*b-c*c;
    res=res/(2*a*b);
    res=acos(res);
    return res;
}
template<typename T>inline T power(T base,int po)
{
    T res=1;
    if(base==0)return 0;
    FOR(i,0,po)res*=base;
    return res;
}
//BIT
template<typename T>inline bool isOn(T mask,T pos)
{
    return mask&(1<<pos);
}
template<typename T>inline int Off(T mask,T pos)
{
    return mask^(1<<pos);
}
template<typename T>inline int On(T mask,T pos)
{
    return mask|(1<<pos);
}
// TODO (DELL#1#):  - - - -


//vector<long long int>vt;
//#define Mx 99999999
////map<long long int,int> mmp;
//long long int arr[Mx];
//void sieve()
//{
//    vt.PB(2);
//   memset(arr,0,sizeof(arr));
//    for(long long int i=3;i<=100000;i+=2)
//    {
//       if(arr[i]==0)
//       {
//         //  cout<<i<<endl;
//            vt.PB(i);
//           for(long long int j=i*i;j<=99999999;j+=2*i)
//            {
//               // cout<<j<<" ";
//                arr[j]=1;
//           }
//           // cout<<endl;
//        }
//   }
//    for(long long int i=100001;i<=99999999;i+=2)
//    {
//       if(arr[i]==0)
//        {
//          //  if(i>=99999900)
//                     //  cout<<i<<endl;
//
//
//           vt.PB(i);
//       }
//   }
//return;
//}
int main()
{
    long long int num,val=1;
    //sieve();
   // vector<long long int>:: iterator it;
    while(cin>>num)
       {
           val=1;
         for(long long int i=num;i>=0;i--)
         {
             val=1;
             for(long long int j=2;j<=sqrt(i);j++)
             {
                 if(i%j ==0)
                 {
                     val=0;
                     break;
                 }
             }
             if(val==1)
             {
                 printf("%lld\n",i);
                 break;
             }
         }

       }
}
