#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        int m, x1, y1, x2, y2;
        std::cin >> m >> x1 >> y1 >> x2 >> y2;
        if(std::abs(x1-x2) + std::abs(y1-y2)<=m)
            std::cout << "First 1\n";
        else
            std::cout << "Infinity\n";
    }
    return 0;
}