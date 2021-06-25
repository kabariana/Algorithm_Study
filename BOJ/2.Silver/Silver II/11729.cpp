#include <bits/stdc++.h>

void hanoiTower(int n, int from, int by, int to)
{
    if(n == 1)
        std::cout << from << " " << to << '\n';
    else
    {
        hanoiTower(n-1, from, to, by);
        std::cout << from << " " << to << '\n';
        hanoiTower(n-1, by, from, to);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    
    std::cout << (1<<n) - 1 << '\n';
    hanoiTower(n, 1, 2, 3);
    return 0;
}