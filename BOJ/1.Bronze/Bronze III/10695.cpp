#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int a, b, c, d, e;
        std::cin >> a >> b >> c >> d >> e;
        int dx = std::abs(b-d);
        int dy = std::abs(e-c);
        std::cout << "Case " << i << ": ";
        if(dx == 1  && dy == 2 || dx == 2 && dy == 1)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}