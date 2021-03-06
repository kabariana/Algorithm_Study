#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, val = 1;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(j == 0)
                std::cout << val++;
            else
                std::cout << " " << val++;
        }
        std::cout << '\n';
    }
    return 0;
}