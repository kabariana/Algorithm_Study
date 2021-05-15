#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double R, L;
    std::cin >> R >> L;
    if(R*2  <= L)
        std::cout << std::fixed << std::setprecision(6) << -1*R << " 0\n" << R << " " << 0;
    else
        std::cout << std::fixed << std::setprecision(6) << -1 * R << " 0\n"<< ((L + R) * (L - R) - R * R) / (2 * R) << " " << sqrt(R * R - ((L + R) * (L - R) - R * R) / (2 * R) * ((L + R) * (L - R) - R * R) / (2 * R));
    return 0;
}