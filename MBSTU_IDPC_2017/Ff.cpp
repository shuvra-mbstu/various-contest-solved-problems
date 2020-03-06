#include<bits/stdc++.h>
using namespace std;
#define mx 100015
int arr[mx];

int tree[mx*3],cas=0;
void init (int node,int b, int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
         //  cout<<tree[node]<<" "<<arr[b]<<" "<<b<<endl;
        return;
    }
    int left = node*2;
    int right = node *2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=max(tree[left],tree[right]);
         //  cout<<tree[node]<<" "<<endl;
}
int query(int node, int b,int e,int i,int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j){
                      // cout<<tree[node]<<" "<<endl;
        return tree[node];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
        return max( p1,p2);
       // cout<<max(p1,p2)<<endl;
}
int main()
{
    int test, num, qry;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&num,&qry);
        for(int i=1;i<=num;i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,num);
        printf("Case %d:",++cas);
        for(int i=1;i<=(num-qry+1);i++)
        {
            int res=query(1,1,num,i,(i+qry-1));
            printf(" %d",res);
        }
        printf("\n");
    }

}
