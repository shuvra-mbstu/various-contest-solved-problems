#include<bits/stdc++.h>
#define mx 100001
//int tree[mx*3];
using namespace std;
long long int n,m,u,i,j,l,r,v,p,res,arr[mx],coun;
void update(long long int node, long long int b, long long int e, long long int i,long long int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        arr[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
   // tree[node] = tree[Left] + tree[Right];
}
int main()
{
    cin>>n>>m>>u;
    {
        i=0;
        coun=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>l>>r>>v>>p;
        for(j=l;j<=r;j++)
        {
            if(arr[j]<v)
            {
                coun++;
            }
        }
        res=((u*coun)/(r-l+1));
       // arr[p-1]=res;
        update(p-1,l,r,j,res);
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    }
    return 0;
}

