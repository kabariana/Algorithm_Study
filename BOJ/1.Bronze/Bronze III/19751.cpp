#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a = 4, b;
    std::vector<int> v;
    while(a--)
    {
        std::cin >> b;
        v.push_back(b);
    }
    std::sort(v.begin(), v.end());
    std::cout << v[0] << ' ' << v[2] << ' ' << v[1] << ' ' << v[3] <<'\n';
    return 0;
}