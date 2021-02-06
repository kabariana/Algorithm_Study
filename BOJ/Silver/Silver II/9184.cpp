#include <bits/stdc++.h>
#define MAXSIZE 21

int dp[MAXSIZE][MAXSIZE][MAXSIZE];

int w(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
        return 1;
    if(a >= MAXSIZE || b >= MAXSIZE || c >= MAXSIZE)
        return w(20, 20, 20);
    
    int& result = dp[a][b][c];
    if(result != 0) return result;

    if (a < b && b < c)
        result = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else
        result = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return result;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c;

    while(1)
    {
        std::cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)
            break;
        std::cout <<"w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c)<< '\n';
    }
    return 0;
}