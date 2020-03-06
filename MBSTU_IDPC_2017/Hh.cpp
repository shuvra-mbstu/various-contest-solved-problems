#include<bits/stdc++.h>
using namespace std;
#define mx 100015
long long int arr[mx];
long long int tree[mx*3],cas=0;
void init (long long int node,long long int b,long long int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
       // cout<<tree[node]<<" "<<arr[b]<<" "<<b<<endl;
        return;
    }
   long long int left = node*2;
   long long int right = node *2+1;
   long long int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
       // cout<<tree[node]<<" "<<endl;
}
long long int query(long long int node,long long int b,long long int e,long long int i,long long int j)
{
    if (i > e || j < b)
        return 10000000007;

    if (b >= i && e <= j){
                      // cout<<tree[node]<<" "<<endl;
        return tree[node];
    }
   long long int Left = node * 2;
   long long int Right = node * 2 + 1;
    long long int mid = (b + e) / 2;
    long long int p1 = query(Left, b, mid, i, j);
   long long  int p2 = query(Right, mid + 1, e, i, j);
        return min( p1,p2);
        //cout<<min(p1,p2)<<endl;
}
int main()
{
   long long int test, num, qry,s,r,re;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&num,&qry);
        for(int i=1;i<=num;i++)
        {
            scanf("%lld",&arr[i]);
        }
        init(1,1,num);
        printf("Case %lld:\n",++cas);
        for(int i=1;i<=qry;i++)
        {
            scanf("%lld%lld",&s,&r);
            if(r<s)
            {
                swap(s,r);
            }
            re=query(1,1,num,s,r);
            printf("%lld\n",re);
        }
        //printf("\n");
    }
}
