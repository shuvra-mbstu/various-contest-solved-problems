#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,coun=2;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        for(int j=1;j<num-i+1;j++)
        {
            printf(" ");
        }
        printf("*");
        if(i!=1){
        for(int k=1;k<(coun);k++)
        {
            printf(" ");
        }
            coun+=2;
            printf("*");
        }
        printf("\n");
    }
            //printf("*\n");
            for(int k=1;k<=num;k++)
            {
                printf("* ");
            }
    }
