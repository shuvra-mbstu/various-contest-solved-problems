#include <stdio.h>
int val[100010];
int main( ) {
 int n, i, k, v, cas=1, test;

 val[0]=0;
 scanf("%d",&test);
 while (test--) {
  scanf("%d",&n);
  for (i=1 ; i<=n ; i++) {
   scanf("%d",&val[i]);
  }
  k = val[1];
  v = val[1];

  for (i=0 ; i<n ; i++) {
   if (val[i+1]-val[i]>v) {
     if (val[i+1]-val[i]>k) {
     k=val[i+1]-val[i];
     v=k-1;
    } else {
     k++;
     v=k;
    }
   }
    else if (val[i+1]-val[i]==v) {
    v--;
   }
  }
  printf("Case %d: %d\n",cas++,k);

 }
 return 0;
}
