#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double C, L, w, l, sum = 0;
    std::cin >> C >> L;
    for(int i = 0; i< L; i++)
    {
        std::cin >> w >> l;
        sum += w*l;
    }
    std::cout << std::fixed << std::setprecision(6) << sum*C <<'\n';
    return 0;
}