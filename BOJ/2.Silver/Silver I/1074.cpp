#include <bits/stdc++.h>

int n, r, c, res;

void func(int n, int x, int y)
{
    if(x == r && y == c)
    {
        std::cout << res;
        return;
    }

    if(r < x+n && r >= x && c < y+n && c >= y)
    {
        func(n/2, x, y);
        func(n/2, x, y+n/2);
        func(n/2, x+n/2, y);
        func(n/2, x+n/2, y+n/2);
    }
    else
        res += n*n;
}

int main(int argc, char* argv[])
{
    
    std::cin >> n >> r >> c;
    func(std::pow(2, n), 0, 0);
}