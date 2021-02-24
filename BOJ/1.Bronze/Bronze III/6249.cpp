#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, p, h;
    std::cin >> n >> p >> h;

    while(n--)
    {
        int num;
        std::cin >> num;

        if(p > num)
            std::cout << "NTV: Dollar dropped by " << p - num << " Oshloobs\n";
        if(h < num)
            std::cout << "BBTV: Dollar reached " << num << " Oshloobs, A record!\n";
        p = num;
        h = std::max(num, h);
    }
    return 0;
}