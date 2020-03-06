#define ma 100007
#include<bits/stdc++.h>
using namespace std;
int treemx[4*ma],treemn[4*ma],arr[ma];

void init(int node,  int b,  int e)
{
    if (b == e)
    {
        treemn[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init( Left,b, mid);
    init(Right, mid + 1, e);
    if(treemn[Left]<= treemn[Right])
    {
        treemn[node]=treemn[Left];
    }
    else
    {
        treemn[node]=treemn[Right];
    }
}
void init2(int node,  int b,  int e)
{
    if (b == e)
    {
        treemx[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init2( Left,b, mid);
    init2(Right, mid + 1, e);
    if(treemx[Left]>= treemx[Right])
    {
        treemx[node]=treemx[Left];
    }
    else
    {
        treemx[node]=treemx[Right];
    }
}

int querymn(int node, int b,int e,int i,int j)
{
    if (i > e || j < b)
        return 100000000;
    if (b >= i && e <= j)
        return treemn[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = querymn(Left, b, mid, i, j);
    int p2 = querymn(Right, mid + 1, e, i, j);
    return min(p1,p2);
}

int querymx(int node, int b,int e,int i,int j)
{
    if (i > e || j < b)
        return -1000;
    if (b >= i && e <= j)
        return treemx[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = querymx(Left, b, mid, i, j);
    int p2 = querymx(Right, mid + 1, e, i, j);
    return max(p1,p2);
}
int main()
{
    int test,a,b,start,end1,res1,res2,i=0,j=0,node,x,y,res,l,cas=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&node,&end1);
        for(a=1; a<=node; a++)
        {
            scanf("%d",&arr[a]);
        }
        a = end1;
        init(1,1,node);
        init2(1,1,node);
        printf("Case %d: ",++cas);
        //while(a--)
        //{
            res1 = 0;
            res2 = 0;
            for(i=1; i<=node; i++)
            {
                l=i+end1-1;
                if(l>node)
                {
                    break;
                }
                x=(querymx(1,1,node,i,l));
                y=(querymn(1,1,node,i,l));
                res1=(x-y);
                if(res1>res2)
                {
                    res2= res1;
                }
            }
        //}
        printf("%d\n",res2);
    }
    return 0;
}
