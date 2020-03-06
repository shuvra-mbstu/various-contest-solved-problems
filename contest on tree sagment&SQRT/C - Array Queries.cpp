#define ma 100007
#include<bits/stdc++.h>
using namespace std;
int test,a,b,arr[ma],start,end1,res,i=0,j=0,node;
 int tree[3*ma];
void init(int node,  int b,  int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
     int Left = node * 2;
     int Right = node * 2 + 1;
     int mid = (b + e) / 2;
    init( Left,b, mid);
    init(Right, mid + 1, e);
    if(tree[Left]<= tree[Right])
    {
        tree[node]=tree[Left];
    }
    else{
        tree[node]=tree[Right];
    }
}
 int query(int node, int b,int e,int i,int j)
{
    if (i > e || j < b)
        return 100000000;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    if(p1<=p2) return p1;
    else
        return p2;
}
int main()
{
    int k;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&node,&end1);
        for(i=1; i<=node; i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,node);

        printf("Case %d:\n",++j);
        while(end1--)
        {
            scanf("%d%d",&a,&b);

            res=(query(1,1,node,a,b));
            printf("%d\n",res);
        }
    }
    return 0;
}
