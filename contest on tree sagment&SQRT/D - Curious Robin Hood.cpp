#define mx 100007
#include<bits/stdc++.h>
using namespace std;
long long int arr[mx];
long long int tree[mx * 3];
void init(long long int node,long long  int b, long long int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
   long long  int Left = node * 2;
   long long int Right = node * 2 + 1;
   long long  int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
long long int query(long long int node,long long int b,long long int e,long long int i,long long int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
   long long int Left = node * 2;
  long long  int Right = node * 2 + 1;
   long long int mid = (b + e) / 2;
   long long int p1 = query(Left, b, mid, i, j);
   long long int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(long long int node,long long int b,long long int e,long long int i,long long int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
      long long  int k = tree[node] + newvalue;
        tree[node] = k;
        arr[b]=k;
        return;
    }
   long long int Left = node * 2;
  long long  int Right = node * 2 + 1;
    long long int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
void zero(long long int node,long long int b,long long int e,long long int i,long long int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        tree[node] = newvalue;
        arr[b]=newvalue;
        return;
    }
   long long int Left = node * 2;
    long long int Right = node * 2 + 1;
   long long int mid = (b + e) / 2;
    zero(Left, b, mid, i, newvalue);
    zero(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
   long long int n,i,test,term,num,one,two,three,value,result,j,k=0;
    scanf("%lld",&test);
    while(test--)
    {
        printf("Case %lld:\n",++k);
        scanf("%lld%lld",&n,&term);
        i=1;
        j=n;
        while(j--){
        scanf("%lld",&arr[i]);
        i++;
        }
        init(1, 1, n);
        while(term--)
        {
            scanf("%lld",&num);
            if(num==1)
            {
                scanf("%lld",&one);
                printf("%lld\n",arr[one+1]);
                zero(1,1,n,one+1,0);
            }
            else if(num==2)
            {
                scanf("%lld%lld",&two,&value);
                update(1,1,n,two+1,value);
            }
            else if(num==3)
            {
                scanf("%lld%lld",&three,&value);
                result=query(1,1,n,three+1,value+1);
                printf("%lld\n",result);
            }
        }
    }
    return 0;
}
