#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    for(int i = 0; i<32; i++)
        if(n & 1 << i)
            std::cout << i << ' ';
    return 0;
}