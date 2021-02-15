#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;

    int h_max = 0, v_max = 0;

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        h_max = std::max(h_max, num);
    }

    for(int i = 0; i<m; i++)
    {
        int num;
        std::cin >> num;
        v_max = std::max(v_max, num);
    }
    std::cout << h_max + v_max;
    return 0;
}