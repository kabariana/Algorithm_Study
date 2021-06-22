#include <bits/stdc++.h>

char num[10][10];

int judge(int i, int j)
{
    if( j <= 2 )
        if( num[i][j] == num[i][j+1] && num[i][j+1] == num[i][j+2] )
            return 1;
    if( i <= 2 )
        if( num[i][j] == num[i+1][j] && num[i+1][j] == num[i+2][j] )
            return 1;
    if( i >= 2 && j <= 2 )
        if( num[i][j] == num[i-1][j+1] && num[i][j] == num[i-2][j+2] )
            return 1;
    if( i <= 2 && j <= 2 )
        if( num[i][j] == num[i+1][j+1] && num[i][j] == num[i+2][j+2] )
            return 1;
    return 0;
}
int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n, f;
    std::cin >> n;
    while(n--)
    {
        for( int i = 0; i < 5; ++i )
            std::cin >> num[i];
        int fa = 0,fb = 0;
        for( int i = 0; i < 5; ++i )
        {
            for( int j = 0; j < 5; ++j )
            {
                if(num[i][j] == 'A' && !fa)
                    fa = judge( i,j );
                if(num[i][j] == 'B' && !fb)
                    fb = judge( i,j );
            }
        }
        if( fa == fb )
            std::cout << "draw\n";
        else if( fa )
            std::cout << "A wins\n";
        else
            std::cout << "B wins\n";
    }
    return 0;
}