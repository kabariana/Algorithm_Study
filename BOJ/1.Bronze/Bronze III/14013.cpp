#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    double x, y;
    std::cin >> x >> y >> n;
    std::cout << std::fixed << std::setprecision(6);
    while(n--)
    {
        double z;
        char c;
        std::cin >> z >> c;
        if(c == 'A')
            std::cout << z/x*y << '\n';
        else
            std::cout << z/y*x<<'\n';
    }
    return 0;
}