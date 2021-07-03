#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        int x, y;
        std::cin >> x >> y;
        if(x*x + y*y < 6)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
    return 0;
}