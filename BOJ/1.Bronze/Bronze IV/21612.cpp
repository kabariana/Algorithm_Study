#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, result;
    std::cin >> n;
    result = 5*n - 400;
    std::cout << result << '\n' << (result == 100?0:result>100?-1:1);
    return 0;
}