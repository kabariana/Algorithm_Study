#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    for(int i = 0; i< n/2; i++)
    {
        double a, b;
        std::cin >> a >> b;
        int X = (int)(a/22.5);
        int Y = (int)(b/22.5);
        std::cout << (char)(16*X + Y);
    }
    return 0;
}