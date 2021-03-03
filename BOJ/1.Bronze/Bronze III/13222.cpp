#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, W, H;
    std::cin >> N >> W >> H;

    int dist = W*W + H*H;
    while(N--)
    {
        int num;
        std::cin >> num;
        
        if(num*num <= dist)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}