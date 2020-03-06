#include<bits/stdc++.h>
using namespace std;
#include<math.h>
#define pi 2*acos(0)
int main()
{
double a,b,c,i,j;
double s,r1,r2,triangle,circum,inscribed;
while(scanf("%lf%lf%lf",&a,&b,&c)==3)
{
s=(a+b+c)/2;
triangle=sqrt(s*(s-a)*(s-b)*(s-c));
double yy=sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
double xx=(a*b*c);
r1=(xx/yy);
cout<<xx<<" "<<yy<<" " <<r1<<endl;
r2=triangle/s;
cout<<r2<<endl;
circum=(pi*pow(r1,2))-triangle;
cout<<circum<<endl;
inscribed=(pi*pow(r2,2));
triangle=triangle-inscribed;
printf("%.4lf %.4lf %.4lf\n",circum,triangle,inscribed);
}
return 0;

}
