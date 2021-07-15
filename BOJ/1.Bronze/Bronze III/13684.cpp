#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int k, n, m, x, y;
    while(true)
    {
        std::cin >> k;
        if(k == 0)
            break;
        std::cin >> n >> m;
        for(int i = 0; i<k; i++)
        {
            std::cin >> x >> y;
            if(x == n || y == m)
                std::cout << "divisa\n";
            else if(x < n && y < m)
                std::cout << "SO\n";
            else if(x < n)
                std::cout << "NO\n";
            else if(y < m)
                std::cout << "SE\n";
            else
                std::cout << "NE\n";
        }
    }
    return 0;
}