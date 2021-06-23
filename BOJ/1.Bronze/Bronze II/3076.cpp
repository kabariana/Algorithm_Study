#include <bits/stdc++.h>

int main(int argc, char*argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int r, c, a, b;
    std::cin >> r >> c >> a >> b;

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j < a; j++)
        {
            for(int k = 0; k < c; k++)
                std::cout << std::string(b, (i+k)&1?'.':'X');
            std::cout << '\n';
        }
    }
    return 0;
}