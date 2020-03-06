#include <cstdio>
#include <cstring>

int main()
{
    char in[ 510 ];
    int sa[ 123 ], res[ 123 ];
    while( gets(in) && in[ 0 ] != '#')
    {
        int len = strlen( in );
        for(int i = 97; i < 123; i++) res[ i ] = sa[ i ] = 0;
        for(int i = 0; i < len; i++) sa[ in[i] ]++;
        int odd = 0, even = 0;
        for(int i = 97; i < 123; i++)
        {
            if(sa[ i ])
                if(sa[ i ] % 2) odd++;
                else even++;
        }

        for(int i = 97; i < 123 && odd > 1; i++)
        {
            if(sa[ i ])
            if(sa[ i ] % 2) res[ i ]++, odd--;
        }
        for(int i = 97; i < 123; i++)
            for(int j = 0; j < res[ i ]; j++) printf("%c", i);
        puts("");
    }
}
