#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::vector<int> v(1001);

    int n, p;
    std::cin >> n >> p;

    for(int i = 1, tmp = n; ; i++)
    {
        if(v[tmp])
        {
            std::cout << i - v[tmp] << '\n';
            break;
        }
        v[tmp] = i;
        tmp = tmp * n % p;
    }
    return 0;
}