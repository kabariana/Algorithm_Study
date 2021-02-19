// cin, cout 시간초과 조심 좀!!
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        std::cout << n-num+1 << ' ';
    }
    return 0;
}