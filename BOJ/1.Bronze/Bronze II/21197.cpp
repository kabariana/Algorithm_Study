#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, sum = 0, tmp;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        std::cin >> tmp;
        i & 1 ? sum += tmp : sum -= tmp;
    }
    std::cout << (n&1?"still running":std::to_string(sum));
    return 0;   
}