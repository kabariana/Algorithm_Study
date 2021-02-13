#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int n, index = 0, max = 0;
        std::cin >> n;
        std::vector<std::pair<int, std::string>> v(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> v[i].first >> v[i].second;
            if (v[i].first > max)
            {
                max = v[i].first;
                index = i;
            }
        }
        std::cout << v[index].second << '\n';
    }
    return 0;
}