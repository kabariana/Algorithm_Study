#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T, cnt = 0;
    std::cin >> T;

    while(T--)
    {
        double l, w, d, weight;
        std::cin >> l >> w >> d >> weight;
        if(weight > 7 || !((l<=56&&w<=45&&d<=25  || l+w+d<=125)))
            std::cout << "0\n";
        else
        {
            std::cout << "1\n";
            cnt++;
        }
    }
    std::cout << cnt;
    return 0;
}