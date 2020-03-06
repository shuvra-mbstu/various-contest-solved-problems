/******************************************************************************************* **********************************\

_____/\\\\\\\\\\\_____/\\\________/\\\___/\\\________/\\\___/\\\________/\\\_____/\\\\\\\\\__________/\\\\\\\\\____
  ___/\\\/////////\\\__\/\\\_______\/\\\__\/\\\_______\/\\\__\/\\\_______\/\\\___/\\\///////\\\______/\\\\\\\\\\\\\__
  __\//\\\______\///___\/\\\_______\/\\\__\/\\\_______\/\\\__\//\\\______/\\\___\/\\\_____\/\\\_____/\\\/////////\\\_
   ___\////\\\__________\/\\\\\\\\\\\\\\\__\/\\\_______\/\\\___\//\\\____/\\\____\/\\\\\\\\\\\/_____\/\\\_______\/\\\_
    ______\////\\\_______\/\\\/////////\\\__\/\\\_______\/\\\____\//\\\__/\\\_____\/\\\//////\\\_____\/\\\\\\\\\\\\\\\_
     _________\////\\\____\/\\\_______\/\\\__\/\\\_______\/\\\_____\//\\\/\\\______\/\\\____\//\\\____\/\\\/////////\\\_
      __/\\\______\//\\\___\/\\\_______\/\\\__\//\\\______/\\\_______\//\\\\\_______\/\\\_____\//\\\___\/\\\_______\/\\\_
       _\///\\\\\\\\\\\/____\/\\\_______\/\\\___\///\\\\\\\\\/_________\//\\\________\/\\\______\//\\\__\/\\\_______\/\\\_
        ___\///////////______\///________\///______\/////////____________\///_________\///________\///___\///________\///__

 ///   CSE, MBSTU;
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
//#define LL long long
//#define ULL unsigned long long
#define ull unsigned long long
#define eps 1e-14
//#define MOD 1000000007
//#define PI 3.14159265
#define SZ(X) ((int)(X).size())
//#define ALL(X) (X).begin(), (X).end()
//#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
//#define FOR(I, A, B) for (int I = (A); I <= (B); ++I)
//#define FORS(I, S) for (int I = 0; S[I]; ++I)
#define RS(X) scanf("%s", (X))
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define CASET int ___T; scanf("%d", &___T); for(int cs=1;cs<=___T;cs++)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define F first
#define S second
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
//typedef pair<int,int> PII;
//typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VPII;
typedef pair<LL,LL> PLL;
typedef vector<PLL> VPLL;
template<class T> void _R(T &x) { cin >> x; }
void _R(int &x) { scanf("%d", &x); }
void _R(LL &x) { scanf("%lld", &x); }
void _R(double &x) { scanf("%lf", &x); }
void _R(char &x) { scanf(" %c", &x); }
void _R(char *x) { scanf("%s", x); }
void R() {}
//template<class T, class... U> void R(T &head, U &... tail) { _R(head); R(tail...); }
template<class T> void _W(const T &x) { cout << x; }
void _W(const int &x) { printf("%d", x); }
void _W(const LL &x) { printf("%lld", x); }
void _W(const double &x) { printf("%.16f", x); }
void _W(const char &x) { putchar(x); }
void _W(const char *x) { printf("%s", x); }
template<class T,class U> void _W(const pair<T,U> &x) {_W(x.F); putchar(' '); _W(x.S);}
//template<class T> void _W(const vector<T> &x) { for (auto i = x.begin(); i != x.end(); _W(*i++)) if (i != x.cbegin()) putchar(' '); }
void W() {}
//template<class T, class... U> void W(const T &head, const U &... tail) { _W(head); putchar(sizeof...(tail) ? ' ' : '\n'); W(tail...); }
#ifdef HOME
 #define DEBUG(...) {printf("# ");printf(__VA_ARGS__);puts("");}
#else
 //#define DEBUG(...)
#endif
int MOD = 1e9+7;
void ADD(LL& x,LL v){x=(x+v)%MOD;if(x<0)x+=MOD;}
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
/**ll dx8[]={-1,-1,-1,0,0,1,1,1};
ll dy8[]={-1,0,1,-1,1,-1,0,1};
ll dx4[]={-1,0,1,0};
ll dy4[]={0,1,0,-1};**/
/*
struct st{
int l;
int r;
}ss;
bool cmp(st a, st b){
return (a.r-a.l)<(b.r-b.l);
}
*/
int main()
{
    //    freopen("apache.in","r",stdin);
//    freopen("apache.out","w",stdout);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
     ios::sync_with_stdio(false);

}
